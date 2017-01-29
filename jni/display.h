#include <string>

class Display
{
public:
	Display(int width, int height, const std::string& title);

	void Update();
	void isClosed();

	virtual ~Display();
protected:
private:
	//	Display(const Display& other) {}
	//	Display& operator=(const Display other) {}
};
