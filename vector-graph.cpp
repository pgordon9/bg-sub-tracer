
// Vector graph Plan
// -----------------------------
// Create a vector graph of the "good" points found along the way
//
// vector:
//    (magnitude, direction)
//
// Graph (Vector of Vectors):
// -----------------------------
//  Vector(
//    Vector{ (m1,d1), (m2,d2), (m3,d3) },
//    Vector{ (m4,d4) },
//    Vector{ (m1,d1), (m2,d2), (m3,d3), (m4,d4) },
//  )
//
// Process
//  1. Loop through each frame in the frame buffer(4-10?)
//  2. Loop through Each positive pixel in curr frame
//  3. Compare curr frame pixel with frame buffer, if creates valid
//     Vector, add it to the vector of vectors
//
//
// Vector Formulas/Tricks
//  - Check if vector direction changes within ~97%, if so don't include
//
