class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> maxHeap(gifts.begin(), gifts.end());
        for(int i = 0; i < k; ++i) {
            int maxGifts = maxHeap.top();
            maxHeap.pop();

            int remainingGifts = floor(sqrt(maxGifts));

            maxHeap.push(remainingGifts);
        }

        long long totalRemainingGifts = 0;
        while(!maxHeap.empty()) {
            totalRemainingGifts += maxHeap.top();
            maxHeap.pop();
        }

        return totalRemainingGifts;
        
    }
};