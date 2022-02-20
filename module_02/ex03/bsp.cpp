#include "Point.hpp"

#define Vector2D Point

static Vector2D	subVec(Point const& a, Point const& b) {
    return Vector2D((a.getX() - b.getX()).toFloat(),
                 (a.getY() - b.getY()).toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Vector2D ab = subVec(b, a);
    Vector2D ca = subVec(a, c);
    Vector2D bc = subVec(c, b);
    Vector2D bp = subVec(point, b);
    Vector2D cp = subVec(point, c);
    Vector2D ap = subVec(point, a);

    Fixed cross1 = ab.getX() * bp.getY() - ab.getY() * bp.getX();
    Fixed cross2 = bc.getX() * cp.getY() - bc.getY() * cp.getX();
    Fixed cross3 = ca.getX() * ap.getY() - ca.getY() * ap.getX();

    if (cross1 > Fixed(0) && cross2 > Fixed(0) && cross3 > Fixed(0))
        return true;
    if (cross1 < Fixed(0) && cross2 < Fixed(0) && cross3 < Fixed(0))
        return true;
    return false;
}