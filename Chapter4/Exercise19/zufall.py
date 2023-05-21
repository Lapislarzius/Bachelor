from time import time

class PRNG:
    def __init__(self):
        self._b = 9757
        self._c = 6925
        self._m = 32768
        self._r = self._rand(int(time()))

    def _rand(self, seed):
        self._a = seed % self._m
        while True:
            self._a = (self._a * self._b + self._c) % self._m
            yield self._a

    def rand(self):
        return self._r.__next__()

    def randDouble(self):
        return self._r.__next__() / self._m
