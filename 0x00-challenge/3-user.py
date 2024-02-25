#!/usr/bin/python3
"""User password"""


class User:
    """User class"""

    def __init__(self, password: str):
        """Initialize the User instance with a password"""
        self.password = password

    def is_valid_password(self, test_password: str) -> bool:
        """Check if the test password matches the user's password"""
        return test_password == self.password


if __name__ == "__main__":
    user = User("Test User")
    test_password = "Test User"
    if user.is_valid_password(test_password):
        print("is_valid_password should return True if it's the right password")
