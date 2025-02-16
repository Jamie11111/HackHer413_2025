let buttonPressedNum = 0;

export async function GET() {
    return Response.json({count: buttonPressedNum});
}

export async function POST(req: Request) {
    const {count} = await req.json();
    buttonPressedNum = count;
    return Response.json({success: true, count: buttonPressedNum});
}