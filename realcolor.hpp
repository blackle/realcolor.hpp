#pragma once

#include <iostream>
#include <cstdio>
#include <functional>

namespace realcolor
{
	namespace
	{
		constexpr int red(int rgb)
		{
			return (rgb >> 16) & 0xFF;
		}

		constexpr int green(int rgb)
		{
			return (rgb >> 8) & 0xFF;
		}

		constexpr int blue(int rgb)
		{
			return rgb & 0xFF;
		}
	};

	inline std::ostream& reset(std::ostream& stream)
	{
		stream << "\x1b[0m";
		return stream;
	}

	inline std::string fg(int r, int g, int b)
	{
		std::stringstream color;
		color << "\x1b[38;2;" << r << ";" << g << ";" << b << "m";
		return color.str();
	}

	inline std::string bg(int r, int g, int b)
	{
		std::stringstream color;
		color << "\x1b[48;2;" << r << ";" << g << ";" << b << "m";
		return color.str();
	}

	inline std::string fg(double r, double g, double b)
	{
		return fg((int)(r*0xFF), (int)(g*0xFF), (int)(b*0xFF));
	}

	inline std::string bg(double r, double g, double b)
	{
		return bg((int)(r*0xFF), (int)(g*0xFF), (int)(b*0xFF));
	}

	inline std::string fg(float r, float g, float b)
	{
		return fg((int)(r*0xFF), (int)(g*0xFF), (int)(b*0xFF));
	}

	inline std::string bg(float r, float g, float b)
	{
		return bg((int)(r*0xFF), (int)(g*0xFF), (int)(b*0xFF));
	}

	inline std::string fg(int rgb)
	{
		return fg(red(rgb), green(rgb), blue(rgb));
	}

	inline std::string bg(int rgb)
	{
		return bg(red(rgb), green(rgb), blue(rgb));
	}
};
