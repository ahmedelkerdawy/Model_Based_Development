t = linspace(0,10,101)';
u = linspace(0,1,101)';
%out = sim('Accelator_pedal_position_sensors'); % Run simulation manually from script
plot(t, u, 'b', out.tout, out.yout, 'r'); % Assuming yout is used for voltage
xlabel('time');
legend('position', 'voltage');

