def read_from_file():
    f = open("link.txt", "r")
    f.read()

def timeitmark(func):
    import time
    start = time.time_ns()
    func()
    end = time.time_ns()
    result = (end - start)
    return result

if __name__ == "__main__":
    #quick check
    times = []
    print(timeitmark(read_from_file))

    # 10 check and get mean
    for _ in range(10):
        times.append(timeitmark(read_from_file))
    print(sum(times) / len(times))