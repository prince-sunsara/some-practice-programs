# STAR PATTERN 1
# *
# **
# ***
# ****
# *****

# n = 5
# for i in range(0 , n+1):
#     for j in range(0, i):
#         print("*", end="")
#     print()


# STAR PATTERN 2
#     *
#    **
#   ***
#  ****
# *****

# for i in range(0, n+1):
#     for j in range(n-i):
#         print(" ", end="")
#     for k in range(i):
#         print("*", end="")
#     print()


# STAR PATTERN 3
#     *
#    * *
#   * * *
#  * * * *
# * * * * *
# for i in range(0, n+1):
#     for j in range(n-i):
#         print(" ", end="")
#     for k in range(i):
#         print(" *", end="")
#         # print("* ", end="") # both gives same result
#     print()


# extra
# *****
# ****
# ***
# **
# *

# print()
# for i in range(0, n+1):
#     for j in range(n-i):
#         print("*",end="")
#     print()


# STAR PATTERN 4
# *****
#  ****
#   ***
#    **
#     *

# print()
# for i in range(0, n+1):
#     for j in range(i):
#         print(" ",end="")
#     for k in range(n-i):
#         print("*",end="")
#     print()


# STAR PATTERN 5
# * * * *
# *     *
# *     *
# * * * *

# for i in range(n):
#     for j in range(n):
#         if i==0 or i==n-1 or j==0 or j==n-1:
#             print("*",end="")
#         else:
#             print(" ", end="")
#     print()
