namespace sample {

class Sub {
  public:
    Sub() = default;
    Sub(Sub &&) = default;
    Sub(const Sub &) = default;
    Sub &operator=(Sub &&) = default;
    Sub &operator=(const Sub &) = default;
    ~Sub() = default;

    int operator()(int a, int b);
};

} // namespace sample
