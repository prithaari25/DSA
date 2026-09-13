def print_subsequence_sum(ind, ds, currsum, target_sum, arr, n):
    if ind == n:
        if currsum == target_sum:
            print(" ".join(map(str, ds)))
        return

    # PICK
    ds.append(arr[ind])
    currsum += arr[ind]
    print_subsequence_sum(ind + 1, ds, currsum, target_sum, arr, n)

    # NOT PICK
    ds.pop()
    currsum -= arr[ind]
    print_subsequence_sum(ind + 1, ds, currsum, target_sum, arr, n)


if __name__ == "__main__":
    arr = [1, 2, 1]
    n = len(arr)
    target_sum = 2
    ds = []
    print_subsequence_sum(0, ds, 0, target_sum, arr, n)
