from fido.templates.cmake_c import CMakeC

class RosPkg(CMakeC):
    def get_name(self):
 	return "rospkg"
    def get_description(self):
	return "Create a simple ros package."

def template_load():
    return RosPkg()
