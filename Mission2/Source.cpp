#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

#include <iostream>

const char alphabet[36] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1', '2', '3','4','5','6','7','8','9','0' };
const std::string morse[36] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----" };



char morseLetterToChar(std::string morseCode) 
{
	int index = 0;
	while (morseCode != morse[index] && index<36)
	{ 
		index++;
	}
	if (index == 36)
		return '?';
		
	else
		return alphabet[index];
	
		

}

int main(int argc, char** argv)
{
	cv::Mat img = cv::imread("C:\\Users\\user1\\Desktop\\הורד.png", 0);
	std::string answer = "";
	int lastWhite = 0;
	
	
	
	
	for (int i = 0; i < img.rows; i++)
		for (int j = 0; j < img.cols; j++)
		{
			if ((int)img.at<unsigned char>(i, j) != 255)
				lastWhite++;
			else
			{
				answer += char(lastWhite);
				lastWhite = 1;
			}
		}
	std::string letter = "";
	std::string converted = "";
	for (int i = 0; i<answer.length(); ++i) 
	{
		if (answer.at(i) == ' ')
		{
			converted += morseLetterToChar(letter);
			letter = "";
		}
		else
		{
			letter += answer[i];
		}

	}
			
	std::cout << answer << std::endl;
	std::cout << converted << std::endl;
	return 0;
}
