num_casas = int(input())
nums = [int(input()) for _ in range(num_casas)]
soma = int(input())

for i in range(len(nums)):
    for j in range(i+1, len(nums)):
        if nums[i] + nums[j] == soma:
            if nums[i] > nums[j]:
                print(f"{nums[j]} {nums[i]}")
                break
            elif nums[j] > nums[i]:
                print(f"{nums[i]} {nums[j]}")
                break


