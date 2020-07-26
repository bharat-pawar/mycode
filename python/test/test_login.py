#pip install pytest
#pip install pytest-html
#pip install pytest-cov
#pip install pytest-xdist
# commands : pytest
# commands : pytest --html report.html

def test_login():
    assert (1 == 1)

def test_logout():
    expected_value = 'Success'
    actual_value = None
    assert (expected_value == actual_value)
