vector<int> bitManipulation(int num, int i){
    vector<int> result;
    int getBit = (num >> (i-1)) & 1;
    result.push_back(getBit);

    int setBit = num | (1 << (i-1));
    result.push_back(setBit);

    int clearBit = num & ~(1 << (i-1));
    result.push_back(clearBit);

    return result;
}
