#!/usr/bin/env python3

def read_input() -> list[str]:
    lines = [input() for _ in range(1)]
    return lines

def main():
    # read input
    [weight] = read_input()
  
  

    print('NO' if int(weight) % 2 else 'YES')


if __name__ == '__main__':
  main()