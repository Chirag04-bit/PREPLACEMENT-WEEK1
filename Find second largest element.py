def second_largest(nums):
    unique_nums = list(set(nums))
    if len(unique_nums) < 2:
        return None
    unique_nums.sort(reverse=True)
    return unique_nums[1]

arr = [10, 20, 4, 45, 99, 99, 78]
print("Second largest element is:", second_largest(arr))
