class Pair():
    def __init__(self, first, second):
        self.first = first
        self.second = second
    def __str__(self):
        return f'{{{str(self.first)}, {str(self.second)}}}'
    def __len__(self):
        return 2

puto = Pair([],[])
print(puto)