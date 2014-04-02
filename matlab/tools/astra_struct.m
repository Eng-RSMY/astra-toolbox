function res = astra_struct(type)

%------------------------------------------------------------------------
% res = astra_struct(type)
%
% Create an ASTRA struct
%
% type: type of the struct to be generated.
% res: the generated matlab struct.
%------------------------------------------------------------------------
%------------------------------------------------------------------------
% This file is part of the
% All Scale Tomographic Reconstruction Antwerp Toolbox ("ASTRA-Toolbox")
%
% Copyright: iMinds-Vision Lab, University of Antwerp
% License: Open Source under GPLv3
% Contact: mailto:astra@ua.ac.be
% Website: http://astra.ua.ac.be
%------------------------------------------------------------------------
% $Id$
res = struct();
res.options = struct();


if nargin >= 1
	% For backward compatibility, transparently accept SIRT_CUDA2
	% for SIRT_CUDA, and FP_CUDA2 for FP_CUDA.
	if strcmp(type, 'SIRT_CUDA2')
		type = 'SIRT_CUDA';
		warning('SIRT_CUDA2 has been deprecated. Use SIRT_CUDA instead.');
	end
	if strcmp(type, 'FP_CUDA2')
		type = 'FP_CUDA';
		warning('FP_CUDA2 has been deprecated. Use FP_CUDA instead.');
	end
	res.type = type;
end