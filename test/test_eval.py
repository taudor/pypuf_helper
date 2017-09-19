import unittest
from numpy import array
from numpy.testing import assert_array_equal
import pypuf_helper as ph


class TestEval(unittest.TestCase):

    def test_01(self):
        input_test = array([
            [[1, -1, -1], [1,  1,  1]],
            [[-1, -1,  1], [1, -1, -1]],
            [[1, -1,  1], [1, -1,  1]]
        ])
        weights = array([
            [0.3, -0.2, 1.5],
            [-0.7, 2.5, -1]
        ])
        evaluated = array([
            [-1,  1],
            [1, -1],
            [1, -1]])

        assert_array_equal(
            ph.eval(input_test, weights),
            evaluated,
            "Evaluation fails."
        )
