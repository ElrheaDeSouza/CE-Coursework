jugA = int(input('Enter the maximum capacity of Jug A:'))
jugB = int(input('Enter the maximum capacity of Jug B:'))
goal = int(input('Enter the goal state in Jug B:'))


def pour(jug1, jug2, visited):
    # Print the current state
    print(jug1, "\t\t", jug2)

    # Check if the current state is the goal state
    if jug1 == goal or jug2 == goal:
        return True

    # Mark this state as visited
    visited.add((jug1, jug2))

    # Generate all possible next states
    possible_moves = [
        (jugA, jug2),  # Fill jug1
        (jug1, jugB),  # Fill jug2
        (0, jug2),  # Empty jug1
        (jug1, 0),  # Empty jug2
        (0, jug1 + jug2) if jug1 + jug2 <= jugB else (jug1 - (jugB - jug2), jugB),
        (jug1 + jug2, 0) if jug1 + jug2 <= jugA else (jugA, jug2 - (jugA - jug1))
    ]

    for next_state in possible_moves:
        if next_state not in visited:
            if pour(next_state[0], next_state[1], visited):
                return True
    return False


print("JUG1\t\tJUG2")
if not pour(0, 0, set()):
    print("No solution found.")