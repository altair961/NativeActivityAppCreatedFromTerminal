#include <string>

class Display
{
public:
	Display(int width, int height, const std::string& title);

	void Update();
	void isClosed();
	int getColorValue();

	virtual ~Display();
protected:
private:
	int colorValue;
	//	Display(const Display& other) {}
	//	Display& operator=(const Display other) {}
};
