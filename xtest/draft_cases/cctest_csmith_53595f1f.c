// SPDX-License-Identifier: MIT
// cctest_csmith_53595f1f.c --- cctest case csmith_53595f1f (csmith seed 1398365983)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x93f884bb */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 1398365983 -o /tmp/csmith_gen_y6jfr3zw/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint32_t g_2[1][4] = {{0xD3DF75DCL,0xD3DF75DCL,0xD3DF75DCL,0xD3DF75DCL}};
static int32_t g_3[3][3] = {{0x0A35F394L,0x0A35F394L,0x0A35F394L},{0x0A35F394L,0x0A35F394L,0x0A35F394L},{0x0A35F394L,0x0A35F394L,0x0A35F394L}};
static uint32_t g_11 = 0x5F4E26C1L;
static uint32_t g_35 = 1UL;
static uint8_t g_53 = 0xCBL;
static uint32_t g_63 = 0x4E0F8CCAL;
static uint16_t g_66[3] = {65531UL,65531UL,65531UL};
static uint32_t g_109 = 18446744073709551611UL;
static int64_t g_126 = 0x035BBA98850522FELL;
static int64_t g_139 = 0x037E6CEEB8BFCC78LL;
static int32_t g_140[3][2] = {{1L,1L},{0x9C51C981L,1L},{1L,0x9C51C981L}};



static int32_t  func_1(void);
static int8_t  func_16(uint8_t  p_17, uint8_t  p_18, uint32_t  p_19, uint16_t  p_20);
static uint32_t  func_23(int64_t  p_24, uint8_t  p_25, uint32_t  p_26, int64_t  p_27);




static int32_t  func_1(void)
{ 
    uint16_t l_7 = 0xFF8EL;
    uint8_t l_22 = 0xF1L;
    int32_t l_28[4][2];
    uint32_t l_54 = 0x23BFA4ACL;
    const uint32_t l_88 = 4294967294UL;
    int16_t l_108 = 0x3628L;
    int32_t l_151 = 0x761F95EDL;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_28[i][j] = 1L;
    }
lbl_69:
    for (g_3[1][0] = 0; (g_3[1][0] <= 0); g_3[1][0] += 1)
    { 
        uint32_t l_4 = 18446744073709551615UL;
        int32_t l_5 = 0xD76715F0L;
        l_5 = l_4;
        for (l_4 = 0; (l_4 <= 0); l_4 += 1)
        { 
            int32_t l_10 = 0L;
            for (l_5 = 0; (l_5 <= 0); l_5 += 1)
            { 
                int32_t l_6 = 0x8F4727CAL;
                int i, j;
                l_6 = g_2[l_4][(l_5 + 2)];
                ++l_7;
            }
            for (l_7 = 0; (l_7 <= 0); l_7 += 1)
            { 
                g_11 ^= (l_7 && (l_10 <= l_7));
            }
        }
    }
    if ((safe_div_func_uint16_t_u_u((safe_div_func_int64_t_s_s((((l_28[3][0] = func_16((!(l_22 <= (((((g_53 ^= func_23(g_3[2][2], (l_28[3][0] ^= 0xD6L), l_22, g_3[1][0])) , l_22) , g_35) && l_22) ^ l_7))), g_3[1][0], l_54, g_3[1][0])) <= 0x8BL) , 1L), g_3[1][0])), l_22)))
    { 
        if (l_54)
            goto lbl_69;
    }
    else
    { 
        uint64_t l_82 = 18446744073709551608UL;
        int8_t l_87 = 0L;
        int64_t l_99 = 0x899AE76D89E43F1BLL;
        int32_t l_102 = 1L;
        int32_t l_106[3];
        int32_t l_117[3];
        int i;
        for (i = 0; i < 3; i++)
            l_106[i] = 0x0143C861L;
        for (i = 0; i < 3; i++)
            l_117[i] = 1L;
        for (g_53 = 0; (g_53 <= 2); g_53 += 1)
        { 
            int32_t l_80 = 0x57B8DD85L;
            int32_t l_81[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_81[i][j] = (-1L);
            }
            if ((safe_div_func_int16_t_s_s(g_66[g_53], (safe_div_func_uint16_t_u_u(((((safe_mod_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s(l_28[3][0], (((((((g_35 = (((((safe_mod_func_uint16_t_u_u(g_35, g_66[g_53])) >= 3L) || 0L) || 0x8EL) , g_3[1][0])) , 1L) | g_2[0][0]) & g_53) < g_63) > g_66[0]) ^ 0x768238A5L))) & g_66[g_53]), g_66[g_53])) <= g_66[1]) <= g_2[0][3]) , 65535UL), 65535UL)))))
            { 
                g_3[1][0] |= l_28[3][1];
                if (g_66[1])
                    continue;
            }
            else
            { 
                int16_t l_89[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_89[i][j] = 0xD8F3L;
                }
                ++l_82;
                g_3[1][0] = (((((safe_add_func_int16_t_s_s(((0x1FL > ((l_87 ^= l_82) >= l_88)) <= 7L), g_63)) > l_89[0][2]) | l_89[0][2]) > g_11) > 0x0A67L);
                if (l_82)
                    continue;
            }
            g_3[2][1] |= 0xEF3DD4F1L;
        }
        if (l_54)
        { 
            uint32_t l_101 = 18446744073709551615UL;
            int32_t l_103 = 0x1BF5FED8L;
            int32_t l_104 = 5L;
            l_28[3][0] = (g_3[0][1] |= (safe_mod_func_uint16_t_u_u(g_35, 5L)));
            if (l_28[3][0])
            { 
                int8_t l_98 = (-4L);
                int64_t l_100 = 0x6EBE0C2A5ADA2C71LL;
                int32_t l_105 = (-1L);
                int32_t l_107 = 0L;
                g_3[2][2] = (((((safe_rshift_func_uint8_t_u_u((((((l_28[3][0] <= (safe_add_func_int64_t_s_s((0xFD0E8CD9L != ((g_66[2]++) || g_3[0][2])), 0xA0A76656E8C2BAF6LL))) | l_98) && l_99) || g_53) && l_100), g_53)) >= 0x681FL) & (-10L)) ^ l_101) ^ 0xEC6483D34BCD6995LL);
                ++g_109;
            }
            else
            { 
                int16_t l_114[2][4];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_114[i][j] = 0x6920L;
                }
                l_117[0] = ((l_106[1] = (255UL > ((safe_lshift_func_int8_t_s_u((l_114[0][0] | ((safe_mod_func_int64_t_s_s((((g_66[0] > g_109) == l_99) || 249UL), l_114[1][1])) || g_63)), g_2[0][0])) ^ l_114[0][0]))) > 0xDDD1L);
            }
        }
        else
        { 
            int16_t l_129 = 0x188AL;
            int32_t l_130 = 0xC8C7C792L;
            g_3[0][1] = g_63;
            if (l_108)
            { 
                int16_t l_127 = (-1L);
                int32_t l_128[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_128[i] = (-3L);
                g_3[1][0] &= l_106[1];
                l_128[0] |= (g_3[1][0] != (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((g_126 = (g_53 ^ (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((8UL & 0xF18CL), 1UL)), g_35)))) , 65526UL), l_127)), 0x06A9L)));
                l_130 ^= l_129;
            }
            else
            { 
                l_106[1] = ((l_130 = ((safe_div_func_uint16_t_u_u(l_87, ((l_28[3][1] = (((g_140[0][0] = (safe_add_func_uint8_t_u_u((g_139 = (g_53 = (safe_mod_func_int32_t_s_s((g_3[1][0] = (((((safe_mod_func_uint8_t_u_u((((l_117[2] |= g_2[0][2]) ^ 18446744073709551615UL) , 255UL), g_63)) < 0x70729E39L) == 18446744073709551609UL) == l_129) | g_66[1])), 3L)))), l_28[0][0]))) <= g_66[2]) <= l_28[3][0])) , l_117[1]))) >= g_2[0][3])) , g_109);
                return g_2[0][0];
            }
            l_151 |= (safe_mul_func_int16_t_s_s(((l_28[0][0] = l_7) || (l_28[0][0] = ((safe_rshift_func_uint8_t_u_s((0xC9F97C32L & (g_63--)), (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((((((l_106[1] , g_2[0][0]) | g_53) & l_117[1]) > g_140[2][1]) >= 0x6919L), g_140[1][1])), l_130)))) , g_2[0][2]))), 0L));
        }
    }
    return g_53;
}



static int8_t  func_16(uint8_t  p_17, uint8_t  p_18, uint32_t  p_19, uint16_t  p_20)
{ 
    uint32_t l_62 = 0x8976CC22L;
    int32_t l_64 = (-7L);
    int32_t l_65[1];
    int i;
    for (i = 0; i < 1; i++)
        l_65[i] = (-1L);
    l_64 ^= (g_35 && (safe_rshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(((!(g_63 = (0UL < ((safe_rshift_func_int8_t_s_s(p_17, 6)) <= l_62)))) , 0x558CD180L), (-1L))) && 0x86A60883475F5401LL) || g_63), 14)));
    g_66[1]--;
    return p_18;
}



static uint32_t  func_23(int64_t  p_24, uint8_t  p_25, uint32_t  p_26, int64_t  p_27)
{ 
    int16_t l_36 = 0x72A6L;
    int32_t l_37 = 0xCE324E81L;
    int32_t l_49 = (-1L);
    int32_t l_50 = (-1L);
    int64_t l_51 = (-8L);
    int32_t l_52 = 0xFCACAF8AL;
    l_37 = (safe_mod_func_uint32_t_u_u(p_25, ((((p_24 & (((safe_lshift_func_int16_t_s_u(((g_35 = (safe_mul_func_int16_t_s_s((((-6L) || 0xCB08L) , 5L), p_25))) <= p_24), g_2[0][2])) >= p_24) ^ g_3[1][0])) < 0xA9L) < l_36) , 0x5008D6DBL)));
    for (l_37 = 0; (l_37 >= 0); l_37 -= 1)
    { 
        int32_t l_38[2][3] = {{0x297F1FF7L,0x297F1FF7L,0x297F1FF7L},{1L,1L,1L}};
        int i, j;
        return l_38[1][0];
    }
    l_52 = (safe_mod_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u(p_25, (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((((l_37 = 0xF874L) , (l_50 &= (l_49 = ((l_37 ^= (p_27 < 0UL)) , l_37)))) && g_2[0][0]) >= l_36), p_24)), 14)), 0x64E3L)))) | g_11) != l_51), p_27));
    return l_37;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);

    }
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_140[i][j], "g_140[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
