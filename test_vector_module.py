import vector_module

def test_add():
    assert vector_module.add([1, 2, 3], [4, 5, 6]) == [5, 7, 9]

def test_subtract():
    assert vector_module.subtract([4, 5, 6], [1, 2, 3]) == [3, 3, 3]

def test_dot_product():
    assert vector_module.dot_product([1, 2, 3], [4, 5, 6]) == 32

def test_vector3d():
    v = vector_module.Vector3D(1, 2, 2)
    assert v.length() == 3
    vn = v.normalize()
    assert vn.x == 1/3
    assert vn.y == 2/3
    assert vn.z == 2/3

if __name__ == "__main__":
    test_add()
    test_subtract()
    test_dot_product()
    test_vector3d()
    print("All tests passed!")
