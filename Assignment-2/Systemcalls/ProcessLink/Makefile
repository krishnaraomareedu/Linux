src = ChildLink.c
src1 = New.c
project = ChildLink
target: $(src) $(src1)
	gcc $< -o $@
	gcc $> -o New
run: $(project)
	./$^