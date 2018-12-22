-----------------------------------------------------------------------------------
-- Maratis
-- Jules script test
-----------------------------------------------------------------------------------

-- get objects
Player = getObject("Player")
Head = getObject("Head")

dx = 0.0
dy = 0.0

centerCursor()
mx = getAxis("MOUSE_X")
my = getAxis("MOUSE_Y")

-- scene update
function onSceneUpdate()

	log("start update")

	-- rotate Player (X mouse)
	rotate(Player, {0, 0, -1}, dx*100)
	
	-- rotate Head (Y mouse)
	rotate(Head, {-1, 0, 0}, dy*100, "local")	
	rotation = getRotation(Head)
	if rotation[1] > 90 then
		rotation[1] = 90
	elseif rotation[1] < -90 then
		rotation[1] = -90
	end

	setRotation(Head, rotation)
	
	-- move
	if isKeyPressed("UP") then
		addCentralForce(Player, {0, 6, 0}, "local")
	end
	
	if isKeyPressed("DOWN") then
		addCentralForce(Player, {0, -6, 0}, "local")
	end
	
	if isKeyPressed("LEFT") then
		addCentralForce(Player, {-3, 0, 0}, "local")
	end

	if isKeyPressed("RIGHT") then
		addCentralForce(Player, {3, 0, 0}, "local")
	end	
	
	-- get mouse direction
	dx = getAxis("MOUSE_X") - mx
	dy = getAxis("MOUSE_Y") - my

	-- center cursor
	centerCursor()
	
	mx = getAxis("MOUSE_X")
	my = getAxis("MOUSE_Y")

	log("finish update")
	
end