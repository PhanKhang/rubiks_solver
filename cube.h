#ifndef CUBE_H
#define CUBE_H
enum colors {
    RED = 0,ORANGE = 1,YELLOW = 2,GREEN = 3,BLUE = 4,WHITE = 5
};
enum faces {
    TOP = 0,RIGHT = 1,BACK = 2,LEFT = 3, FRONT= 4,BOTTOM= 5
};
/*
 *Let the cube be like that:
 *
 *       |222222|
 *       |222222|
 *       |2BACK2|
 *       |222222|
 *       |222222|
 *       |222222|
 * --------------------
 * 333333|000000|111111
 * 333333|000000|111111
 * 3LEFT3|0TOP00|1RIGHT
 * 333333|000000|111111
 * 333333|000000|111111
 * 333333|000000|111111
 * --------------------
 *       |444444|
 *       |444444|
 *       |4FRONT|
 *       |444444|
 *       |444444|
 *       |444444|
 *       --------
 *       |555555|
 *       |555555|
 *       |BOTTOM|
 *       |555555|
 *       |555555|
 *       |555555|
 *       --------
 */

#endif // CUBE_H

