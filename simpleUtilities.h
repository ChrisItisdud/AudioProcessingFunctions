namespace AudioProcessingAlgorithms {

class SimpleUtilities {
public:
    /*
    <summary>converts left/right to mid/side channels</summary>
    <param name='l'>left input</param>
    <param name='r'>right input</param>
    <param name='m'>mid output will be stored here</param>
    <param name='s'>side output will be stored here</param>
    */
    static void LRtoMS(float l, float r, float &m, float &s);
    /*
    <summary>converts left/right to mid/side channels</summary>
    <param name='l'>left input</param>
    <param name='r'>right input</param>
    <param name='m'>mid output will be stored here</param>
    <param name='s'>side output will be stored here</param>
    */
    static void LRtoMS(double l, double r, double &m, double &s);
    /*
    <summary>converts mid/side to left/right channels</summary>
    <param name='l'>left output will be stored here</param>
    <param name='r'>right output will be stored here</param>
    <param name='m'>mid input</param>
    <param name='s'>side input</param>
    */
    static void MStoLR(float m, float s, float &l, float &r);
    /*
    <summary>converts mid/side to left/right channels</summary>
    <param name='l'>left output will be stored here</param>
    <param name='r'>right output will be stored here</param>
    <param name='m'>mid input</param>
    <param name='s'>side input</param>
    */
    static void MStoLR(double m, double s, double &l, double &r);

    template <typename T>
    /*
    <summary>slew limiter for numeric types</summary>
    <param name='target'>the target value for the parameter</param>
    <param name='value'>reference to the parameter to adjust</param>
    <param name='threshold'>threshold for slew limiting/maximum movement between samples</param>
    */
    static T slew (T target, T &value, T threshold);
};
}