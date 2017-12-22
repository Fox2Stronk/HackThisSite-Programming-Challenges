
def get_unscrambled_word(word):
    f = open('C:\Users\user1\Downloads\wordlist\wordlist.txt', 'r')
    for line in f.readlines():

        if sorted(word) == sorted(line)[1:]:
            return line[:-1]


def get_input():
    with open('C:\Users\user1\Desktop\input.txt') as f:
        scrambled_input = f.readlines()
        scrambled_input = [x.strip() for x in scrambled_input]
        return scrambled_input



if __name__ == '__main__':
    words = get_input()
    string = ''
    for word in words:
        string += get_unscrambled_word(word)
        string += ','
    print string[:-1]


