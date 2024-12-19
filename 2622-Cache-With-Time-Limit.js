class TimeLimitedCache {
    constructor() {
        this.store = new Map();
    }
     
    set(key, value, duration) {
        const existingEntry = this.store.get(key);
        if (existingEntry) {
            clearTimeout(existingEntry.timerId);
        }

        const timerId = setTimeout(() => {
            this.store.delete(key);
        }, duration);

        this.store.set(key, { value, timerId });
        return Boolean(existingEntry);
    }

    get(key) {
        if (this.store.has(key)) {
            return this.store.get(key).value;
        }
        return -1;
    }

    count() {
        return this.store.size;
    }
}
