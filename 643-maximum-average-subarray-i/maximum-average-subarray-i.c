double findMaxAverage(int* nums, int numsSize, int k) {

    double sum = 0;

    // First window
    for(int i = 0; i < k; i++) {
        sum += nums[i];
    }

    double avg = sum / (double)k;

    // Slide window
    for(int i = 0; i < numsSize - k; i++) {

        sum = sum - nums[i] + nums[i+k];

        double avg1 = sum / (double)k;

        if(avg1 > avg) {
            avg = avg1;
        }
    }

    return avg;
}