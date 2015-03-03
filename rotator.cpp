#include "rotator.h"
#include <stdio.h>

Rotator::Rotator()
{

}
Rotator::Rotator(colors values[6][3][3] )  {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                this->cube[i][j][k] = values[i][j][k];
            }
        }
    }
}

void Rotator::rotateTopFace90Clockwise() {
    colors newCube[6][3][3];// = new colors[][][];
    //copy cube
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                newCube[i][j][k] = cube[i][j][k];
            }
        }
    }
    newCube[TOP][0][0] = cube[TOP][2][0];
    newCube[TOP][0][1] = cube[TOP][1][0];
    newCube[TOP][0][2] = cube[TOP][0][0];
    newCube[TOP][1][0] = cube[TOP][2][1];
    newCube[TOP][1][1] = cube[TOP][1][1];
    newCube[TOP][1][2] = cube[TOP][0][1];
    newCube[TOP][2][0] = cube[TOP][2][2];
    newCube[TOP][2][1] = cube[TOP][1][2];
    newCube[TOP][2][2] = cube[TOP][0][2];

    newCube[BACK][0][0] = cube[LEFT][0][0];
    newCube[BACK][0][1] = cube[LEFT][0][1];
    newCube[BACK][0][2] = cube[LEFT][0][2];
    newCube[RIGHT][0][1] = cube[BACK][0][1];
    newCube[RIGHT][0][0] = cube[BACK][0][0];
    newCube[RIGHT][0][2] = cube[BACK][0][2];
    newCube[FRONT][0][0] = cube[RIGHT][0][0];
    newCube[FRONT][0][1] = cube[RIGHT][0][1];
    newCube[FRONT][0][2] = cube[RIGHT][0][2];
    newCube[LEFT][0][0] = cube[FRONT][0][0];
    newCube[LEFT][0][1] = cube[FRONT][0][1];
    newCube[LEFT][0][2] = cube[FRONT][0][2];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cube[i][j][k] = newCube[i][j][k];
            }
        }

    }
}

void Rotator::rotateTopFace90CounterClockwise() {
    colors newCube[6][3][3];// = new colors[][][];
    //copy cube
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                newCube[i][j][k] = cube[i][j][k];
            }
        }
    }
    newCube[TOP][0][0] = cube[TOP][0][2];
    newCube[TOP][0][1] = cube[TOP][1][2];
    newCube[TOP][0][2] = cube[TOP][2][2];
    newCube[TOP][1][0] = cube[TOP][0][1];
    newCube[TOP][1][1] = cube[TOP][1][1];
    newCube[TOP][1][2] = cube[TOP][2][1];
    newCube[TOP][2][0] = cube[TOP][0][0];
    newCube[TOP][2][1] = cube[TOP][1][0];
    newCube[TOP][2][2] = cube[TOP][2][0];

    newCube[FRONT][0][0] = cube[LEFT][0][0];
    newCube[FRONT][0][1] = cube[LEFT][0][1];
    newCube[FRONT][0][2] = cube[LEFT][0][2];

    newCube[LEFT][0][1] = cube[BACK][0][1];
    newCube[LEFT][0][0] = cube[BACK][0][0];
    newCube[LEFT][0][2] = cube[BACK][0][2];

    newCube[BACK][0][0] = cube[RIGHT][0][0];
    newCube[BACK][0][1] = cube[RIGHT][0][1];
    newCube[BACK][0][2] = cube[RIGHT][0][2];

    newCube[RIGHT][0][0] = cube[FRONT][0][0];
    newCube[RIGHT][0][1] = cube[FRONT][0][1];
    newCube[RIGHT][0][2] = cube[FRONT][0][2];
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cube[i][j][k] = newCube[i][j][k];
            }
        }
    }
}

void Rotator::rotateRghtFace90Clockwise() {
    colors newCube[6][3][3];// = new colors[][][];
    //copy cube
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                newCube[i][j][k] = cube[i][j][k];
            }
        }
    }
    newCube[RIGHT][0][0] = cube[RIGHT][2][0];
    newCube[RIGHT][0][1] = cube[RIGHT][1][0];
    newCube[RIGHT][0][2] = cube[RIGHT][0][0];
    newCube[RIGHT][1][0] = cube[RIGHT][2][1];
    newCube[RIGHT][1][1] = cube[RIGHT][1][1];
    newCube[RIGHT][1][2] = cube[RIGHT][0][1];
    newCube[RIGHT][2][0] = cube[RIGHT][2][2];
    newCube[RIGHT][2][1] = cube[RIGHT][1][2];
    newCube[RIGHT][2][2] = cube[RIGHT][0][2];

    newCube[BACK][0][0] = cube[TOP][0][2];
    newCube[BACK][1][0] = cube[TOP][1][2];
    newCube[BACK][2][0] = cube[TOP][2][2];

    newCube[TOP][0][2] = cube[FRONT][0][2];
    newCube[TOP][1][2] = cube[FRONT][1][2];
    newCube[TOP][2][2] = cube[FRONT][2][2];

    newCube[FRONT][0][2] = cube[BOTTOM][0][2];
    newCube[FRONT][1][2] = cube[BOTTOM][1][2];
    newCube[FRONT][2][2] = cube[BOTTOM][2][2];

    newCube[BOTTOM][0][2] = cube[BACK][2][0];
    newCube[BOTTOM][1][2] = cube[BACK][1][0];
    newCube[BOTTOM][2][2] = cube[BACK][0][0];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cube[i][j][k] = newCube[i][j][k];
            }
        }
    }
}

void Rotator::rotateBackFace90CounterClockwise() {
    colors newCube[6][3][3];// = new colors[][][];
    //copy cube
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                newCube[i][j][k] = cube[i][j][k];
            }
        }
    }
    newCube[BACK][0][0] = cube[BACK][0][2];
    newCube[BACK][0][1] = cube[BACK][1][2];
    newCube[BACK][0][2] = cube[BACK][2][2];
    newCube[BACK][1][0] = cube[BACK][0][1];
    newCube[BACK][1][1] = cube[BACK][1][1];
    newCube[BACK][1][2] = cube[BACK][2][1];
    newCube[BACK][2][0] = cube[BACK][0][0];
    newCube[BACK][2][1] = cube[BACK][1][0];
    newCube[BACK][2][2] = cube[BACK][2][0];

    newCube[TOP][0][0] = cube[LEFT][2][0];
    newCube[TOP][0][1] = cube[LEFT][1][0];
    newCube[TOP][0][2] = cube[LEFT][0][0];

    newCube[LEFT][0][0] = cube[BOTTOM][2][0];
    newCube[LEFT][1][0] = cube[BOTTOM][2][1];
    newCube[LEFT][2][0] = cube[BOTTOM][2][2];

    newCube[BOTTOM][2][0] = cube[RIGHT][2][2];
    newCube[BOTTOM][2][1] = cube[RIGHT][1][2];
    newCube[BOTTOM][2][2] = cube[RIGHT][0][2];

    newCube[RIGHT][0][2] = cube[TOP][0][0];
    newCube[RIGHT][1][2] = cube[TOP][0][1];
    newCube[RIGHT][2][2] = cube[TOP][0][2];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cube[i][j][k] = newCube[i][j][k];
            }
        }
    }

}

void Rotator::rotateBackFace90Clockwise() {
    colors newCube[6][3][3];// = new colors[][][];
    //copy cube
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                newCube[i][j][k] = cube[i][j][k];
            }
        }
    }
    newCube[BACK][0][0] = cube[BACK][2][0];
    newCube[BACK][0][1] = cube[BACK][1][0];
    newCube[BACK][0][2] = cube[BACK][0][0];
    newCube[BACK][1][0] = cube[BACK][2][1];
    newCube[BACK][1][1] = cube[BACK][1][1];
    newCube[BACK][1][2] = cube[BACK][0][1];
    newCube[BACK][2][0] = cube[BACK][2][2];
    newCube[BACK][2][1] = cube[BACK][1][2];
    newCube[BACK][2][2] = cube[BACK][0][2];

    newCube[TOP][0][0] = cube[RIGHT][0][2];
    newCube[TOP][0][1] = cube[RIGHT][1][2];
    newCube[TOP][0][2] = cube[RIGHT][2][2];

    newCube[RIGHT][0][2] = cube[BOTTOM][2][2];
    newCube[RIGHT][1][2] = cube[BOTTOM][2][1];
    newCube[RIGHT][2][2] = cube[BOTTOM][2][0];

    newCube[BOTTOM][2][0] = cube[LEFT][0][0];
    newCube[BOTTOM][2][1] = cube[LEFT][1][0];
    newCube[BOTTOM][2][2] = cube[LEFT][2][0];

    newCube[LEFT][0][0] = cube[TOP][0][2];
    newCube[LEFT][1][0] = cube[TOP][0][1];
    newCube[LEFT][2][0] = cube[TOP][0][0];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cube[i][j][k] = newCube[i][j][k];
            }
        }
    }

}

void Rotator::rotateBottomFace90CounterClockwise()
{
    colors newCube[6][3][3];// = new colors[][][];
    //copy cube
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                newCube[i][j][k] = cube[i][j][k];
            }
        }
    }
    newCube[BOTTOM][0][0] = cube[BOTTOM][0][2];
    newCube[BOTTOM][0][1] = cube[BOTTOM][1][2];
    newCube[BOTTOM][0][2] = cube[BOTTOM][2][2];
    newCube[BOTTOM][1][0] = cube[BOTTOM][0][1];
    newCube[BOTTOM][1][1] = cube[BOTTOM][1][1];
    newCube[BOTTOM][1][2] = cube[BOTTOM][2][1];
    newCube[BOTTOM][2][0] = cube[BOTTOM][0][0];
    newCube[BOTTOM][2][1] = cube[BOTTOM][1][0];
    newCube[BOTTOM][2][2] = cube[BOTTOM][2][0];

    newCube[FRONT][2][0] = cube[RIGHT][2][0];
    newCube[FRONT][2][1] = cube[RIGHT][2][1];
    newCube[FRONT][2][2] = cube[RIGHT][2][2];

    newCube[RIGHT][2][0] = cube[BACK][2][0];
    newCube[RIGHT][2][1] = cube[BACK][2][1];
    newCube[RIGHT][2][2] = cube[BACK][2][2];

    newCube[BACK][2][0] = cube[LEFT][2][0];
    newCube[BACK][2][1] = cube[LEFT][2][1];
    newCube[BACK][2][2] = cube[LEFT][2][2];

    newCube[LEFT][2][0] = cube[FRONT][2][0];
    newCube[LEFT][2][1] = cube[FRONT][2][1];
    newCube[LEFT][2][2] = cube[FRONT][2][2];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cube[i][j][k] = newCube[i][j][k];
            }
        }
    }
}

void Rotator::rotateBottomFace90Clockwise()
{
    colors newCube[6][3][3];// = new colors[][][];
    //copy cube
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                newCube[i][j][k] = cube[i][j][k];
            }
        }
    }
    newCube[BOTTOM][0][0] = cube[BOTTOM][2][0];
    newCube[BOTTOM][0][1] = cube[BOTTOM][1][0];
    newCube[BOTTOM][0][2] = cube[BOTTOM][0][0];
    newCube[BOTTOM][1][0] = cube[BOTTOM][2][1];
    newCube[BOTTOM][1][1] = cube[BOTTOM][1][1];
    newCube[BOTTOM][1][2] = cube[BOTTOM][0][1];
    newCube[BOTTOM][2][0] = cube[BOTTOM][2][2];
    newCube[BOTTOM][2][1] = cube[BOTTOM][1][2];
    newCube[BOTTOM][2][2] = cube[BOTTOM][0][2];

    newCube[FRONT][2][0] = cube[LEFT][2][0];
    newCube[FRONT][2][1] = cube[LEFT][2][1];
    newCube[FRONT][2][2] = cube[LEFT][2][2];

    newCube[LEFT][2][0] = cube[BACK][2][0];
    newCube[LEFT][2][1] = cube[BACK][2][1];
    newCube[LEFT][2][2] = cube[BACK][2][2];

    newCube[BACK][2][0] = cube[RIGHT][2][0];
    newCube[BACK][2][1] = cube[RIGHT][2][1];
    newCube[BACK][2][2] = cube[RIGHT][2][2];

    newCube[RIGHT][2][0] = cube[FRONT][2][0];
    newCube[RIGHT][2][1] = cube[FRONT][2][1];
    newCube[RIGHT][2][2] = cube[FRONT][2][2];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cube[i][j][k] = newCube[i][j][k];
            }
        }
    }

}

void Rotator::rotateLeftFace90CounterClockwise()
{
    colors newCube[6][3][3];// = new colors[][][];
    //copy cube
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                newCube[i][j][k] = cube[i][j][k];
            }
        }
    }
    newCube[LEFT][0][0] = cube[LEFT][0][2];
    newCube[LEFT][0][1] = cube[LEFT][1][2];
    newCube[LEFT][0][2] = cube[LEFT][2][2];
    newCube[LEFT][1][0] = cube[LEFT][0][1];
    newCube[LEFT][1][1] = cube[LEFT][1][1];
    newCube[LEFT][1][2] = cube[LEFT][2][1];
    newCube[LEFT][2][0] = cube[LEFT][0][0];
    newCube[LEFT][2][1] = cube[LEFT][1][0];
    newCube[LEFT][2][2] = cube[LEFT][2][0];

    newCube[FRONT][0][0] = cube[BOTTOM][0][0];
    newCube[FRONT][1][0] = cube[BOTTOM][1][0];
    newCube[FRONT][2][0] = cube[BOTTOM][2][0];

    newCube[BOTTOM][0][0] = cube[BACK][0][2];
    newCube[BOTTOM][1][0] = cube[BACK][1][2];
    newCube[BOTTOM][2][0] = cube[BACK][2][2];

    newCube[BACK][0][2] = cube[TOP][0][0];
    newCube[BACK][1][2] = cube[TOP][1][0];
    newCube[BACK][2][2] = cube[TOP][2][0];

    newCube[TOP][0][0] = cube[FRONT][0][0];
    newCube[TOP][1][0] = cube[FRONT][1][0];
    newCube[TOP][2][0] = cube[FRONT][2][0];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cube[i][j][k] = newCube[i][j][k];
            }
        }
    }
}

void Rotator::rotateLeftFace90Clockwise()
{
    colors newCube[6][3][3];// = new colors[][][];
    //copy cube
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                newCube[i][j][k] = cube[i][j][k];
            }
        }
    }
    newCube[LEFT][0][0] = cube[LEFT][2][0];
    newCube[LEFT][0][1] = cube[LEFT][1][0];
    newCube[LEFT][0][2] = cube[LEFT][0][0];
    newCube[LEFT][1][0] = cube[LEFT][2][1];
    newCube[LEFT][1][1] = cube[LEFT][1][1];
    newCube[LEFT][1][2] = cube[LEFT][0][1];
    newCube[LEFT][2][0] = cube[LEFT][2][2];
    newCube[LEFT][2][1] = cube[LEFT][1][2];
    newCube[LEFT][2][2] = cube[LEFT][0][2];

    newCube[FRONT][0][0] = cube[TOP][0][0];
    newCube[FRONT][1][0] = cube[TOP][1][0];
    newCube[FRONT][2][0] = cube[TOP][2][0];

    newCube[TOP][0][0] = cube[BACK][0][2];
    newCube[TOP][1][0] = cube[BACK][1][2];
    newCube[TOP][2][0] = cube[BACK][2][2];

    newCube[BACK][0][2] = cube[BOTTOM][0][0];
    newCube[BACK][1][2] = cube[BOTTOM][1][0];
    newCube[BACK][2][2] = cube[BOTTOM][2][0];

    newCube[BOTTOM][0][0] = cube[FRONT][0][0];
    newCube[BOTTOM][1][0] = cube[FRONT][1][0];
    newCube[BOTTOM][2][0] = cube[FRONT][2][0];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cube[i][j][k] = newCube[i][j][k];
            }
        }
    }

}

void Rotator::rotateFrontFace90CounterClockwise()
{
    colors newCube[6][3][3];// = new colors[][][];
    //copy cube
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                newCube[i][j][k] = cube[i][j][k];
            }
        }
    }
    newCube[FRONT][0][0] = cube[FRONT][0][2];
    newCube[FRONT][0][1] = cube[FRONT][1][2];
    newCube[FRONT][0][2] = cube[FRONT][2][2];
    newCube[FRONT][1][0] = cube[FRONT][0][1];
    newCube[FRONT][1][1] = cube[FRONT][1][1];
    newCube[FRONT][1][2] = cube[FRONT][2][1];
    newCube[FRONT][2][0] = cube[FRONT][0][0];
    newCube[FRONT][2][1] = cube[FRONT][1][0];
    newCube[FRONT][2][2] = cube[FRONT][2][0];

    newCube[TOP][2][0] = cube[RIGHT][0][0];
    newCube[TOP][2][1] = cube[RIGHT][1][0];
    newCube[TOP][2][2] = cube[RIGHT][2][0];

    newCube[RIGHT][0][0] = cube[BOTTOM][0][2];
    newCube[RIGHT][1][0] = cube[BOTTOM][0][1];
    newCube[RIGHT][2][0] = cube[BOTTOM][0][0];

    newCube[BOTTOM][0][0] = cube[LEFT][0][2];
    newCube[BOTTOM][0][1] = cube[LEFT][1][2];
    newCube[BOTTOM][0][2] = cube[LEFT][2][2];

    newCube[LEFT][0][2] = cube[TOP][2][2];
    newCube[LEFT][1][2] = cube[TOP][1][2];
    newCube[LEFT][2][2] = cube[TOP][0][2];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cube[i][j][k] = newCube[i][j][k];
            }
        }
    }
}

void Rotator::rotateFrontFace90Clockwise()
{
    colors newCube[6][3][3];// = new colors[][][];
    //copy cube
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                newCube[i][j][k] = cube[i][j][k];
            }
        }
    }
    newCube[FRONT][0][0] = cube[FRONT][2][0];
    newCube[FRONT][0][1] = cube[FRONT][1][0];
    newCube[FRONT][0][2] = cube[FRONT][0][0];
    newCube[FRONT][1][0] = cube[FRONT][2][1];
    newCube[FRONT][1][1] = cube[FRONT][1][1];
    newCube[FRONT][1][2] = cube[FRONT][0][1];
    newCube[FRONT][2][0] = cube[FRONT][2][2];
    newCube[FRONT][2][1] = cube[FRONT][1][2];
    newCube[FRONT][2][2] = cube[FRONT][0][2];

    newCube[TOP][2][0] = cube[LEFT][0][2];
    newCube[TOP][2][1] = cube[LEFT][1][2];
    newCube[TOP][2][2] = cube[LEFT][2][2];

    newCube[LEFT][0][2] = cube[BOTTOM][0][0];
    newCube[LEFT][1][2] = cube[BOTTOM][0][1];
    newCube[LEFT][2][2] = cube[BOTTOM][0][2];

    newCube[BOTTOM][0][0] = cube[RIGHT][0][0];
    newCube[BOTTOM][0][1] = cube[RIGHT][1][0];
    newCube[BOTTOM][0][2] = cube[RIGHT][2][0];

    newCube[RIGHT][0][0] = cube[TOP][2][0];
    newCube[RIGHT][1][0] = cube[TOP][2][1];
    newCube[RIGHT][2][0] = cube[TOP][2][2];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cube[i][j][k] = newCube[i][j][k];
            }
        }
    }

}

void Rotator::copyCube()
{
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                copyOfCube[i][j][k] = cube[i][j][k];
            }
        }
    }
}



void Rotator::rotateRghtFace90CounterClockwise() {
    colors newCube[6][3][3];// = new colors[][][];
    //copy cube
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                newCube[i][j][k] = cube[i][j][k];
            }
        }
    }
    newCube[RIGHT][0][0] = cube[RIGHT][0][2];
    newCube[RIGHT][0][1] = cube[RIGHT][1][2];
    newCube[RIGHT][0][2] = cube[RIGHT][2][2];
    newCube[RIGHT][1][0] = cube[RIGHT][0][1];
    newCube[RIGHT][1][1] = cube[RIGHT][1][1];
    newCube[RIGHT][1][2] = cube[RIGHT][2][1];
    newCube[RIGHT][2][0] = cube[RIGHT][0][0];
    newCube[RIGHT][2][1] = cube[RIGHT][1][0];
    newCube[RIGHT][2][2] = cube[RIGHT][2][0];

    newCube[FRONT][0][2] = cube[TOP][0][2];
    newCube[FRONT][1][2] = cube[TOP][1][2];
    newCube[FRONT][2][2] = cube[TOP][2][2];

    newCube[TOP][0][2] = cube[BACK][0][2];
    newCube[TOP][1][2] = cube[BACK][1][2];
    newCube[TOP][2][2] = cube[BACK][2][2];

    newCube[BACK][0][0] = cube[BOTTOM][0][2];
    newCube[BACK][1][0] = cube[BOTTOM][1][2];
    newCube[BACK][2][0] = cube[BOTTOM][2][2];

    newCube[BOTTOM][0][2] = cube[FRONT][2][0];
    newCube[BOTTOM][1][2] = cube[FRONT][1][0];
    newCube[BOTTOM][2][2] = cube[FRONT][0][0];

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cube[i][j][k] = newCube[i][j][k];
            }
        }
    }
}

void Rotator::outputCube(){
    for (int i = 0; i < 3; i++) {
        printf("    ");
        for (int j = 0; j < 3; j++) {
            printf("%d",(int)cube[BACK][2-i][2-j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d",(int)cube[LEFT][2-j][i]);
        }
        printf(" ");
        for (int j = 0; j < 3; j++) {
            printf("%d",(int)cube[TOP][i][j]);
        }
        printf(" ");
        for (int j = 0; j < 3; j++) {
            printf("%d",(int)cube[RIGHT][j][2-i]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        printf("    ");
        for (int j = 0; j < 3; j++) {
            printf("%d",(int)cube[FRONT][i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        printf("    ");
        for (int j = 0; j < 3; j++) {
            printf("%d",(int)cube[BOTTOM][i][j]);
        }
        printf("\n");
    }

}


Rotator::~Rotator()
{

}

