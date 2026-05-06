// SPDX-License-Identifier: MIT
// cctest_csmith_0b3238da.c --- cctest case csmith_0b3238da (csmith seed 187840730)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdfd4c315 */

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

// Options:   -s 187840730 -o /tmp/csmith_gen_vnpsf95y/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_3 = 1L;
static int32_t g_4 = 4L;
static uint32_t g_5 = 0x63384304L;
static uint8_t g_9[2] = {0xA5L,0xA5L};
static int32_t g_51[3][1] = {{0x024BFCC0L},{0x024BFCC0L},{0x024BFCC0L}};
static uint32_t g_62 = 0xE87A7CF8L;
static int32_t g_122 = 0xCDFBE848L;
static int8_t g_175 = 1L;
static int32_t g_206[4][3] = {{0xCC6D0661L,(-10L),(-10L)},{0x45CED4DEL,0L,0L},{0xCC6D0661L,(-10L),(-10L)},{0x45CED4DEL,0L,0L}};
static uint64_t g_224 = 0x2B3CBE0EAAB0956CLL;
static int16_t g_225 = 2L;
static uint32_t g_226 = 0x9261D216L;
static uint64_t g_237 = 18446744073709551614UL;
static uint64_t g_279[4][3] = {{0x38F8759F25BC62C2LL,4UL,4UL},{0xEDBE4E106F96AAEALL,0xF888489572028F88LL,0xF888489572028F88LL},{0x38F8759F25BC62C2LL,4UL,4UL},{0xEDBE4E106F96AAEALL,0xF888489572028F88LL,0xF888489572028F88LL}};
static int16_t g_287[2] = {(-5L),(-5L)};
static int32_t g_353[4][1] = {{0xDA6DF6E2L},{(-7L)},{0xDA6DF6E2L},{(-7L)}};



static int64_t  func_1(void);
static int32_t  func_12(int16_t  p_13, const uint32_t  p_14, const uint16_t  p_15);
static uint8_t  func_22(int8_t  p_23, int32_t  p_24, const uint16_t  p_25, uint8_t  p_26);




static int64_t  func_1(void)
{ 
    int16_t l_2[2][3];
    const uint32_t l_205 = 4294967295UL;
    int32_t l_207 = (-6L);
    uint64_t l_220 = 18446744073709551615UL;
    int32_t l_316[3];
    uint32_t l_335 = 0x6E7CD2D1L;
    uint32_t l_343 = 0UL;
    int32_t l_360 = 0x915561DDL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_2[i][j] = 0x1B3CL;
    }
    for (i = 0; i < 3; i++)
        l_316[i] = 7L;
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    { 
        uint64_t l_195[4][4] = {{0x53A1BEE393E82041LL,0x53A1BEE393E82041LL,0x53A1BEE393E82041LL,0x53A1BEE393E82041LL},{0x53A1BEE393E82041LL,0x53A1BEE393E82041LL,0x53A1BEE393E82041LL,0x53A1BEE393E82041LL},{0x53A1BEE393E82041LL,0x53A1BEE393E82041LL,0x53A1BEE393E82041LL,0x53A1BEE393E82041LL},{0x53A1BEE393E82041LL,0x53A1BEE393E82041LL,0x53A1BEE393E82041LL,0x53A1BEE393E82041LL}};
        int i, j;
        for (g_4 = 0; (g_4 <= 1); g_4 += 1)
        { 
            ++g_5;
        }
        for (g_5 = 0; (g_5 <= 1); g_5 += 1)
        { 
            int32_t l_8 = 0x9A5A40F2L;
            int i, j;
            if ((0xEFA42B4837182ABBLL <= (((l_2[g_5][g_3] , ((++g_9[0]) >= (func_12(l_2[g_5][g_3], g_3, g_5) ^ l_2[0][0]))) > (-1L)) , g_62)))
            { 
                l_195[3][2]++;
                if (g_122)
                    continue;
            }
            else
            { 
                int64_t l_198[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_198[i] = 0x492790C0A41B38AELL;
                l_198[0] |= l_8;
                return g_122;
            }
        }
    }
    if ((((safe_rshift_func_uint8_t_u_u((((l_207 |= (g_206[1][1] = (safe_mul_func_int8_t_s_s(g_175, ((safe_lshift_func_uint16_t_u_u(((((g_9[0] ^ ((g_51[1][0] , g_5) | g_4)) == l_2[1][2]) > 0xC0L) | 0xA71B24F3L), 5)) >= l_205))))) , g_62) & 0x8BD4L), l_205)) | l_205) != 0L))
    { 
        uint32_t l_223 = 0x4FDF7665L;
        uint16_t l_227[2][1];
        const int64_t l_228 = 0x0A6EAA2CC3962B67LL;
        int32_t l_236[2][3];
        uint8_t l_260 = 0x7CL;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_227[i][j] = 0xD364L;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_236[i][j] = 1L;
        }
        l_207 &= ((((safe_sub_func_int8_t_s_s((((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((((g_225 = ((safe_sub_func_int16_t_s_s((g_224 ^= ((safe_add_func_uint8_t_u_u(((g_51[1][0] != (((l_220 < (((safe_div_func_uint64_t_u_u(0xFCD1A432A41DB001LL, 0xB0A0D92CAEC0E49BLL)) && 0L) != g_3)) >= l_223) == g_9[0])) >= 0xCFL), l_223)) && 0x89L)), 0xAE3DL)) < g_206[1][1])) | g_226) > g_9[0]) | l_227[0][0]), l_205)), g_175)) > l_228) || l_228), 0x10L)) != 0UL) < g_206[1][1]) == g_206[1][2]);
        for (l_223 = 0; (l_223 <= 2); l_223 += 1)
        { 
            uint64_t l_235 = 5UL;
            int32_t l_280[4];
            int i;
            for (i = 0; i < 4; i++)
                l_280[i] = 0x4FA0E648L;
            if ((safe_mul_func_int8_t_s_s((-1L), (safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((l_235 = (l_220 <= (l_205 >= l_207))), l_223)), 0xD8L)))))
            { 
                int32_t l_238 = 0x21AF0394L;
                int8_t l_259 = (-8L);
                l_236[1][2] &= (g_9[0] >= ((1UL && (l_227[0][0] , l_223)) != l_205));
                l_238 = ((0x4175C3E2L ^ 0x1EDEDEB6L) , (l_205 | g_237));
                l_238 = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((((g_9[0] & (((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(l_228, (safe_add_func_int32_t_s_s((g_122 , (-5L)), g_9[0])))), g_226)), 1)) != g_51[0][0]) ^ l_235)) ^ 0xAE247ED1L) == 9L), g_206[1][1])), l_235)), l_2[0][0])), l_259)), 6)), 1));
            }
            else
            { 
                uint64_t l_261 = 0UL;
                l_260 = g_51[1][0];
                if (l_261)
                    break;
                return l_261;
            }
            for (g_5 = 0; (g_5 <= 2); g_5 += 1)
            { 
                int32_t l_268[4][4] = {{0x95F7FD56L,0x95F7FD56L,0x706B0FEAL,(-1L)},{(-1L),0L,0x706B0FEAL,0L},{0x95F7FD56L,0xCEAD3318L,(-2L),0x706B0FEAL},{0L,0xCEAD3318L,0xCEAD3318L,0L}};
                int i, j;
                l_268[1][1] ^= (g_9[0] , ((((0x0E7AL >= (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(1UL, l_207)), g_62))) | l_235) >= 0UL) > l_235));
                g_4 = (g_3 &= (safe_mod_func_int16_t_s_s((g_4 & (l_280[0] = ((((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(l_268[0][2], (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((g_279[3][2] |= ((((g_9[0] && 0xA8L) != g_206[3][2]) | l_235) < g_51[1][0])), 0xDDL)), 1UL)))), l_235)) | g_4) < l_236[0][2]) || 0x9A10DCDEB364EF60LL))), g_175)));
            }
        }
    }
    else
    { 
        uint32_t l_288 = 0xE57495F7L;
        int32_t l_321 = (-6L);
        int32_t l_342 = 6L;
        g_4 = (((safe_lshift_func_int8_t_s_s((g_224 , (((g_287[0] = (((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(5L, (g_4 >= g_5))) & 0x6F7DL), g_206[3][1])) || 0L) & 65533UL)) && 65531UL) < l_288)), 4)) , 0x4A06L) >= g_206[1][1]);
        if ((safe_mul_func_uint8_t_u_u((g_9[1]++), (safe_rshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(0xD0BD520F136789F6LL, (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((g_62 = 4294967295UL) < ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_225, 255UL)), 15)) < g_226))), g_5)), g_51[1][0])), 0)) > 248UL)), g_5)) & 0xEB25A575AA0C160ELL), l_2[0][0])))), g_226)))))
        { 
            int16_t l_315 = 0x0220L;
            for (l_207 = 1; (l_207 >= 0); l_207 -= 1)
            { 
                int i;
                l_315 = (+(g_9[l_207] ^ 0x9EC7L));
                g_51[0][0] = (g_9[l_207] != (((++g_62) && (((0xC1L >= ((((l_288 | 0x72B44842A39414E7LL) <= l_2[0][0]) || 253UL) | g_3)) , 0x2C2CABF743292EDELL) , l_205)) , g_51[0][0]));
                g_51[1][0] ^= ((((+4294967295UL) ^ 18446744073709551615UL) >= ((safe_unary_minus_func_uint32_t_u(l_321)) && g_287[0])) == g_9[l_207]);
            }
        }
        else
        { 
            g_4 = (safe_sub_func_uint8_t_u_u(((l_321 != ((safe_div_func_uint16_t_u_u((l_335 = (((safe_div_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s((g_175 &= (+(((safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s(g_226, (l_288 | l_205))), 4294967295UL)) <= l_2[1][1]) < l_288))), 0xC6L)) == g_51[2][0]) > l_316[0]), 0xEE9B8D37L)) < l_316[2]) & g_279[3][2])), l_288)) < g_9[0])) && 0x95L), 3UL));
            g_51[0][0] &= (((l_316[0] = (g_226 & ((((((0x7DCB865DL < (safe_add_func_uint64_t_u_u((((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s((l_288 || l_342), (-1L))), g_237)) , l_220) || l_321), g_9[0]))) <= 0x0439C1662457B24ALL) & g_226) ^ l_321) < l_343) >= 6UL))) || g_62) , l_342);
        }
    }
    for (g_122 = 0; (g_122 >= (-7)); g_122 = safe_sub_func_uint32_t_u_u(g_122, 5))
    { 
        int32_t l_349 = (-10L);
        int32_t l_354[1][2];
        int64_t l_363 = 0x1E11CBF97C399B7BLL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_354[i][j] = 0x86B9388DL;
        }
        if ((safe_lshift_func_uint8_t_u_u(((l_349 = ((safe_unary_minus_func_int32_t_s(0L)) || l_335)) | (((-4L) || g_279[3][2]) <= g_5)), 1)))
        { 
            int64_t l_355[3];
            int i;
            for (i = 0; i < 3; i++)
                l_355[i] = 0xA6A4DE43C07B6ACCLL;
            l_354[0][0] = ((safe_div_func_int16_t_s_s(g_225, (g_353[2][0] |= (((1L & (~(((0x4CB1L && g_287[0]) , 0L) , g_279[3][2]))) ^ 255UL) || l_205)))) <= g_226);
            g_51[0][0] = (g_279[3][2] > (l_355[0] = g_51[1][0]));
        }
        else
        { 
            uint8_t l_359 = 0x08L;
            int32_t l_361[4][2] = {{(-1L),0L},{(-1L),0L},{(-1L),0L},{(-1L),0L}};
            int64_t l_362 = (-5L);
            uint32_t l_364[4][4] = {{0x0F2C9D8CL,2UL,4294967289UL,4294967289UL},{0UL,0UL,1UL,2UL},{2UL,0x0F2C9D8CL,1UL,0x0F2C9D8CL},{0UL,0xCB363515L,4294967289UL,1UL}};
            int i, j;
            for (g_224 = 0; (g_224 > 35); g_224 = safe_add_func_uint64_t_u_u(g_224, 6))
            { 
                uint8_t l_358 = 1UL;
                l_207 = g_279[2][0];
                l_359 = l_358;
            }
            ++l_364[1][2];
            g_353[2][0] &= 7L;
        }
        return g_9[0];
    }
    return l_360;
}



static int32_t  func_12(int16_t  p_13, const uint32_t  p_14, const uint16_t  p_15)
{ 
    uint8_t l_18 = 246UL;
    int32_t l_19 = 0x2E889EC0L;
    int32_t l_52[2];
    uint8_t l_182 = 0x27L;
    int i;
    for (i = 0; i < 2; i++)
        l_52[i] = (-5L);
    if ((0xEA0CL || (l_18 < ((p_14 | g_3) < g_5))))
    { 
        const int64_t l_33[3][2] = {{0x5CAB430688CDF2ABLL,0x5CAB430688CDF2ABLL},{0x5CAB430688CDF2ABLL,0x5CAB430688CDF2ABLL},{0x5CAB430688CDF2ABLL,0x5CAB430688CDF2ABLL}};
        uint64_t l_34 = 0x280563ADE45A9172LL;
        int32_t l_44 = 1L;
        int32_t l_54 = 0x9719BD95L;
        uint32_t l_142 = 0x55526D78L;
        int i, j;
        l_19 = l_18;
        for (l_18 = 0; (l_18 != 36); ++l_18)
        { 
            if (p_14)
                break;
        }
        if ((func_22(((safe_div_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((safe_mul_func_int64_t_s_s(l_33[1][1], ((g_4 > 7L) > g_5))), 65532UL)) < 0x99L) >= p_15), l_34)) , 0xE8L), l_19, p_14, g_5) | 255UL))
        { 
            uint16_t l_57 = 65528UL;
            int32_t l_111 = 0x52BDABF6L;
            int32_t l_113 = 0x7F426174L;
            if ((l_44 = g_4))
            { 
                uint32_t l_49 = 0UL;
                int32_t l_50 = 8L;
                int32_t l_53 = 1L;
                int32_t l_55 = 0xFE6D7BFFL;
                int32_t l_56[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_56[i] = 0xCE951834L;
                l_44 = ((safe_add_func_int32_t_s_s(((safe_add_func_int64_t_s_s(g_3, (((((((l_44 >= g_3) | l_49) ^ p_14) , 3L) ^ 0x1B6BEFC5L) < l_19) , p_15))) & 0UL), 1L)) == 0x1695L);
                l_57++;
                g_4 = (safe_mod_func_uint64_t_u_u((((l_54 = (g_62--)) || (((!((safe_mul_func_int8_t_s_s((((safe_unary_minus_func_uint64_t_u((g_5 == ((safe_sub_func_uint32_t_u_u(p_15, (safe_unary_minus_func_int64_t_s((l_54 = p_13))))) == g_51[1][0])))) ^ l_34) , p_14), l_56[1])) || 0x76C1E801L)) | p_15) , 1UL)) , g_4), l_57));
            }
            else
            { 
                g_51[1][0] = l_57;
            }
            if ((safe_lshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(g_62, 4)), ((g_51[1][0] == p_15) < p_13))) , g_51[1][0]), g_3)) , l_57) && (-3L)), 0)))
            { 
                l_44 = (safe_mod_func_uint64_t_u_u((0xC725EA9B86155BF9LL || (safe_rshift_func_uint16_t_u_s(g_4, ((l_34 ^ l_57) != p_13)))), l_57));
            }
            else
            { 
                const int64_t l_112 = 0x24D9C5E1620D8A88LL;
                int32_t l_123 = 0x924104B6L;
                l_113 ^= ((safe_mul_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((l_19 = (~((((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s((l_52[0] = (l_54 | (safe_mod_func_uint32_t_u_u((l_111 ^= ((((safe_rshift_func_uint16_t_u_s(p_15, ((safe_mod_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(0x3CL, p_15)) ^ (-1L)), p_13)) < 1UL))) >= p_15) , g_51[1][0]) , p_14)), l_18)))), 0xA83BL)) <= l_112), g_62)) , g_62), l_112)), 15)), l_33[1][1])) && 0x20L) | p_15) == 0x24B1L))), 13)) | 0x94A10B7D5E36264DLL), p_14)) && p_14) < p_15), 1UL)) >= p_14);
                g_51[2][0] = (safe_div_func_uint32_t_u_u((g_62 = ((safe_mod_func_int64_t_s_s((l_44 || (safe_mul_func_int16_t_s_s(g_5, (((((g_5 & g_51[1][0]) >= p_15) != p_15) || p_14) != p_13)))), g_62)) || p_14)), l_112));
                l_113 = ((((safe_lshift_func_int8_t_s_s((l_123 = (g_122 = g_4)), (safe_mod_func_int8_t_s_s(1L, 9UL)))) <= p_15) ^ 0x56L) , l_57);
            }
        }
        else
        { 
            uint16_t l_128 = 5UL;
            int32_t l_143 = 4L;
            uint64_t l_170 = 0x9904AA4E2899D26DLL;
            int32_t l_176 = 0L;
            int32_t l_177 = 0L;
            int32_t l_178 = 0xB4B3FC93L;
            int32_t l_179[4][4] = {{0xF34A0336L,0xF34A0336L,(-1L),0xF34A0336L},{0xF34A0336L,0x03C868A9L,0x03C868A9L,0xF34A0336L},{0x03C868A9L,0xF34A0336L,0x03C868A9L,0x03C868A9L},{0xF34A0336L,0xF34A0336L,(-1L),0xF34A0336L}};
            int16_t l_180 = 6L;
            int i, j;
            for (p_13 = 0; (p_13 > 19); p_13 = safe_add_func_int32_t_s_s(p_13, 8))
            { 
                const uint16_t l_130[1] = {0UL};
                uint32_t l_131 = 18446744073709551606UL;
                int i;
                l_128 = g_62;
                g_51[0][0] = ((((l_54 ^= l_128) > ((~(((((((l_130[0] , (((g_51[2][0] > g_62) , (-7L)) == g_51[0][0])) , g_4) < 0x2D28L) || 3UL) , l_131) <= g_51[2][0]) ^ g_62)) & 1L)) > l_131) || l_33[0][1]);
            }
            l_143 = (safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_div_func_int16_t_s_s((!p_13), (safe_lshift_func_uint8_t_u_s((l_52[0] < ((l_142 = ((l_19 = (l_128 , g_3)) , g_62)) <= 0L)), g_62)))) || p_13), 1UL)), 5L))));
            for (l_19 = 0; (l_19 <= 0); l_19 += 1)
            { 
                int32_t l_169 = (-1L);
                int32_t l_181 = 4L;
                int i;
                l_52[(l_19 + 1)] = (((((safe_sub_func_int32_t_s_s(0x3867A306L, (g_62--))) >= ((safe_lshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s(((~(l_143 |= 8L)) == (safe_lshift_func_int8_t_s_s((((safe_mul_func_int8_t_s_s(l_52[l_19], g_4)) <= l_128) , p_14), 1))), l_52[0])) != l_33[1][1]) & g_3), 0)) ^ l_128)) < l_52[l_19]) , g_51[1][0]) ^ l_33[0][1]);
                l_44 &= (safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s(l_52[(l_19 + 1)], (((safe_sub_func_uint32_t_u_u(((g_175 = (((safe_mul_func_uint16_t_u_u(65535UL, (safe_add_func_uint32_t_u_u((++g_62), (--l_170))))) || ((safe_add_func_uint8_t_u_u((p_13 | p_13), p_13)) | p_14)) ^ p_13)) || l_18), l_143)) , p_14) , l_34))), 0x869AL));
                --l_182;
            }
        }
    }
    else
    { 
        uint64_t l_192 = 0xD96BE4A3EB8F9188LL;
        for (g_62 = 0; (g_62 < 46); g_62 = safe_add_func_int64_t_s_s(g_62, 1))
        { 
            uint32_t l_187 = 18446744073709551612UL;
            uint64_t l_190 = 4UL;
            int32_t l_191 = 1L;
            for (g_175 = 0; (g_175 <= 0); g_175 += 1)
            { 
                int i, j;
                ++l_187;
                if (g_5)
                    continue;
            }
            g_4 ^= (l_190 | (l_192--));
        }
    }
    return p_13;
}



static uint8_t  func_22(int8_t  p_23, int32_t  p_24, const uint16_t  p_25, uint8_t  p_26)
{ 
    int64_t l_43 = 0x5746AC1DEA90CFFALL;
    p_24 = ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(((g_4 ^ 4294967295UL) ^ (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u(0UL, l_43)) != p_23), 7))), 65532UL)), l_43)) | p_25);
    return g_3;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_9[i], "g_9[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_51[i][j], "g_51[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_206[i][j], "g_206[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_279[i][j], "g_279[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_287[i], "g_287[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_353[i][j], "g_353[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
