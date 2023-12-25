import re
vowels='aeiouAEIOU'
x=input()
str_list = re.findall(f'[{vowels}]', x, re.I)
print(len(str_list))
     