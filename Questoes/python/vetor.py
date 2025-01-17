nums = [int(input()) for _ in range(10)]

menor = min(nums)

ocorrencia = [i for i in range(10) if nums[i] == menor]

substituir = [-1 if nums[i] == menor else nums[i] for i in range(10)]

print(f"Menor: {menor}")
print("Ocorrencias:", " ".join(map(str, ocorrencia)))
print(" ".join(map(str, substituir)))

