def count(arr: [int], n: int, k: int) -> int:
    # Your code goes here
    l=0
    h=n-1
    low=n
    while l<=h:
        mid=l+(h-l)//2
        if arr[mid]>=k:
            low=mid
            h=mid-1
        else:
            l=mid+1
    if low==n or arr[low]!=k:
        return 0
    l=0
    h=n-1
    high=n
    while l<=h:
        mid=l+(h-l)//2
        if arr[mid]>k:
            high=mid
            h=mid-1
        else:
            l=mid+1

    count=high-low
    return count
