
template<typename T>
class point
{
  T x;
  T y;
  point()(x = 0, y = 0){}
  point(T x, T y)(this->x = x, this->y = y){}
}
