
N = int(input())

dic = {}
sort_dict = {}
ans = []
for _ in range(N):
    word = input()
    dic[word] = len(word)
value_sort = sorted(dic.items(), key=lambda x:x[1])
val = value_sort[0][1]

dic = dict((value_sort)) #value를 기준으로 오름차순 정렬(짧은거 순서)


# ans = dict(sorted(dic.items())) #key를 기준으로 사전순 정렬
# print(ans)
for key, value in dic.items():
    if (val != value):
        ans += sorted(sort_dict.items())
        sort_dict = {}
        sort_dict[key] = value
        val = value
        
        

    else:
        sort_dict[key] = value
ans += sorted(sort_dict.items())

for i in ans:
    print(i[0])
