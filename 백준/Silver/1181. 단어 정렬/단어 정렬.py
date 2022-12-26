print("\n".join(sorted(sorted(set(open(0).read().strip("0123456789").split())), key=len)))
