/*
    This file is part of ydotool.
    Copyright (C) 2018-2019 ReimuNotMoe

    This program is free software: you can redistribute it and/or modify
    it under the terms of the MIT License.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*/

#ifndef YDOTOOL_TOOL_MouseMoveRelative_HPP
#define YDOTOOL_TOOL_MouseMoveRelative_HPP

#include "../../Library/Tool.hpp"


namespace po = boost::program_options;


namespace ydotool {
	namespace Tools {
		class MouseMoveRelative : public Tool::ToolTemplate {
		private:

		public:
			const char *Name() override;

			int Exec(int argc, const char **argv) override;

			static void *construct() {
				return (void *)(new MouseMoveRelative());
			}
		};
	}
}


#endif //YDOTOOL_TOOL_MouseMoveRelative_HPP
