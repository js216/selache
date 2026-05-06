// SPDX-License-Identifier: MIT
// cctest_csmith_05ed9443.c --- cctest case csmith_05ed9443 (csmith seed 99456067)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x3d139558 */

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

// Options:   -s 99456067 -o /tmp/csmith_gen_n81ijjhg/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint32_t g_5[4] = {0xCCE1E2C0L,0xCCE1E2C0L,0xCCE1E2C0L,0xCCE1E2C0L};
static uint16_t g_8 = 65530UL;
static int64_t g_9 = (-8L);
static int64_t g_31 = 0x97F3C88FED6C34F1LL;
static uint64_t g_54 = 0xF2D4E203D7E6DE11LL;
static int32_t g_59[1][4] = {{0x0FF81490L,0x0FF81490L,0x0FF81490L,0x0FF81490L}};
static int32_t g_76 = 0xA25E9F1FL;
static int32_t g_82 = 0x3ADD1EB1L;
static uint32_t g_84 = 1UL;
static uint32_t g_90 = 18446744073709551615UL;
static int32_t g_99 = 0L;
static int64_t g_104 = 0L;
static int64_t g_108 = (-5L);
static uint64_t g_110 = 0xA02582781EE239CALL;
static uint32_t g_115 = 0x34E6C7C9L;
static int16_t g_138[1] = {1L};
static uint64_t g_160[2][4] = {{0xF09DA1C919A85A5CLL,0x9AE18D8E2A735042LL,0xF09DA1C919A85A5CLL,0xF09DA1C919A85A5CLL},{0x9AE18D8E2A735042LL,0x9AE18D8E2A735042LL,0x033D0BF8AE0A268BLL,0x9AE18D8E2A735042LL}};
static uint16_t g_169[3] = {0x05A5L,0x05A5L,0x05A5L};
static int8_t g_234 = 0x4DL;
static int16_t g_235 = 0xE910L;



static int64_t  func_1(void);
static int32_t  func_12(int16_t  p_13);
static int16_t  func_14(int16_t  p_15, uint32_t  p_16, int32_t  p_17, int8_t  p_18, int16_t  p_19);




static int64_t  func_1(void)
{ 
    int8_t l_2 = 0x17L;
    int32_t l_145[2][2] = {{(-1L),(-1L)},{(-1L),(-1L)}};
    int32_t l_156 = 0x793202A9L;
    int64_t l_195 = 0x5120B4C8DAE2F31FLL;
    uint8_t l_236 = 0x82L;
    int i, j;
    if (l_2)
    { 
        uint64_t l_30 = 18446744073709551615UL;
        int32_t l_159 = 0x307333B9L;
        g_9 = (((safe_rshift_func_uint8_t_u_s(g_5[3], ((safe_add_func_int32_t_s_s(g_5[3], g_8)) && 0L))) , (-2L)) && g_8);
        for (g_8 = (-28); (g_8 != 37); ++g_8)
        { 
            uint16_t l_22 = 0xEB44L;
            int32_t l_32[1];
            int i;
            for (i = 0; i < 1; i++)
                l_32[i] = (-1L);
            l_145[1][0] = func_12(func_14((6UL ^ (safe_rshift_func_uint8_t_u_s((l_22 &= l_2), 5))), (safe_unary_minus_func_int64_t_s(((g_31 ^= ((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s(0x89F7A9D2E819D338LL, 0x93208AF066B7A7BCLL)), g_9)) < l_30), 0x9CA3EAA3E8F08877LL)) != 0x6D21L)) , g_31))), l_30, l_32[0], l_30));
            for (l_22 = 19; (l_22 < 51); l_22 = safe_add_func_int8_t_s_s(l_22, 2))
            { 
                g_99 ^= (safe_mod_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(0x0761L, l_156)), (safe_div_func_uint32_t_u_u(0xD5C3A27AL, 0xE50DD9F3L)))) > g_110) & l_30), g_138[0])) > 0xC397L) , l_30), 0xD7BA2CA0L));
                return g_5[3];
            }
            for (g_115 = 0; (g_115 <= 0); g_115 += 1)
            { 
                int i;
                --g_160[1][1];
                g_169[0] ^= (l_159 = (g_99 = (g_138[0] != (safe_lshift_func_uint8_t_u_u((g_82 > ((safe_mul_func_uint16_t_u_u((0xDBL | l_32[0]), g_59[0][3])) == g_160[1][1])), 5)))));
            }
        }
    }
    else
    { 
        const int32_t l_188 = 0x05C23366L;
        g_99 = g_169[0];
        for (g_90 = (-10); (g_90 == 56); g_90 = safe_add_func_int8_t_s_s(g_90, 9))
        { 
            uint64_t l_189 = 1UL;
            int32_t l_196[1];
            int i;
            for (i = 0; i < 1; i++)
                l_196[i] = 0x04F0C4F7L;
            l_145[1][0] = l_156;
            if ((safe_sub_func_int64_t_s_s(((((((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((safe_div_func_uint32_t_u_u(((((0L != (safe_add_func_uint8_t_u_u(((g_99 >= (safe_mul_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(0xA6L, g_160[0][0])), g_54)) >= g_138[0]), g_59[0][1]))) && l_145[1][0]), l_2))) <= 0UL) != g_5[3]) , g_110), 1L)) ^ l_188) <= g_8), 1UL)), 0UL)) < g_169[0]) == g_138[0]) < l_188) >= l_189) && 0x79L), 0x350D549ECA2F01B2LL)))
            { 
                l_196[0] = (!((0x3A72CA7C10F7CF34LL != l_145[1][0]) || ((g_8 = (((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((l_156 != 0x2774L), g_169[0])) == l_189), g_138[0])) , 0x3918L) == g_99)) || l_195)));
                if (l_196[0])
                    continue;
                g_99 = g_110;
            }
            else
            { 
                return g_90;
            }
            return g_104;
        }
        for (g_54 = 0; (g_54 <= 0); g_54 += 1)
        { 
            uint16_t l_209 = 0UL;
            uint64_t l_210 = 0x09FDA15D0CA2F3F1LL;
            for (l_195 = 0; (l_195 >= 0); l_195 -= 1)
            { 
                int i, j;
                g_99 = g_169[(l_195 + 1)];
                g_99 ^= (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((((g_138[g_54] > g_138[l_195]) || (safe_mul_func_uint16_t_u_u((g_169[(g_54 + 1)] ^= ((g_59[l_195][(l_195 + 3)] , l_188) , g_8)), 65527UL))) | g_82), 5)), g_76));
                g_99 = (g_138[0] == (g_169[0] = (((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((safe_sub_func_int8_t_s_s(l_188, l_209)) && g_110) || l_210), g_169[(l_195 + 1)])), g_59[0][1])) > l_210) < g_59[0][1])));
            }
            for (g_99 = 0; (g_99 >= 0); g_99 -= 1)
            { 
                int32_t l_233 = 0xDC1123E8L;
                int i;
                g_235 = (g_169[(g_99 + 1)] , (g_234 = (((((((g_138[g_54] ^ (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((l_233 = (safe_rshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u(((((((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_160[0][3], 6UL)), l_188)), g_59[0][1])), g_31)) || g_59[0][3]) && g_90) , l_195) , g_169[0]) , l_210), g_59[0][0])), 4))), 0x7A47DF5CL)), 0x6C7CCF95L)), l_156)), 0UL)), g_59[0][0]))) >= g_169[(g_99 + 1)]) , g_82) <= 0L) & 0UL) == g_169[(g_99 + 1)]) && 0x06L)));
            }
        }
    }
    --l_236;
    return l_145[0][0];
}



static int32_t  func_12(int16_t  p_13)
{ 
    int32_t l_87 = 0xF9A5DE3BL;
    int32_t l_88 = 0xDA348D5CL;
    int32_t l_89 = 0x08470FB2L;
    int32_t l_109 = 0x07B4D734L;
    for (p_13 = 0; (p_13 <= 3); p_13 += 1)
    { 
        int16_t l_83 = 0xBBC9L;
        int32_t l_100 = 0x7570C98FL;
        int32_t l_101 = (-1L);
        int32_t l_102 = 0x7A4D755EL;
        ++g_84;
        for (g_84 = 0; (g_84 <= 3); g_84 += 1)
        { 
            int8_t l_93 = (-5L);
            int32_t l_98 = 1L;
            g_90--;
            l_93 = g_84;
            l_89 = ((safe_mod_func_int32_t_s_s(p_13, (safe_div_func_int32_t_s_s((l_98 = (p_13 | ((((l_83 , p_13) & 1UL) , l_83) > g_5[2]))), 0x0E7A75E4L)))) ^ p_13);
        }
        for (l_83 = 0; l_83 < 4; l_83 += 1)
        {
            g_5[l_83] = 1UL;
        }
        for (l_89 = 0; (l_89 <= 3); l_89 += 1)
        { 
            int32_t l_103[2][2] = {{1L,1L},{1L,1L}};
            int32_t l_107[3][2] = {{1L,1L},{1L,1L},{1L,1L}};
            int i, j;
            if (g_9)
            { 
                g_99 = 0x880D9182L;
            }
            else
            { 
                int64_t l_105[1];
                int32_t l_106 = 0x9ECA6A3FL;
                int i;
                for (i = 0; i < 1; i++)
                    l_105[i] = 6L;
                g_110--;
                l_88 = 0xC1F8D07FL;
            }
            if (g_59[0][1])
                break;
            if (g_76)
            { 
                int8_t l_113[3][3] = {{(-8L),(-8L),(-8L)},{0x13L,0x1DL,0x13L},{(-8L),(-8L),(-8L)}};
                int32_t l_114[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_114[i][j] = 0xF942F024L;
                }
                l_113[2][2] = (l_88 = p_13);
                ++g_115;
                l_101 = (~(safe_rshift_func_uint16_t_u_s(1UL, (safe_rshift_func_int16_t_s_u(g_115, 9)))));
            }
            else
            { 
                int64_t l_123 = 1L;
                int32_t l_131 = 0x499C2BA9L;
                l_88 = (l_123 >= (p_13 ^ (safe_mul_func_int16_t_s_s(((((safe_sub_func_uint64_t_u_u(((((+(g_115 = ((((safe_rshift_func_int8_t_s_u((l_131 = (((-2L) | l_103[1][1]) > 4294967295UL)), 3)) || p_13) <= 18446744073709551615UL) || 1UL))) != g_59[0][1]) > l_102) , p_13), l_102)) == p_13) && l_89) <= l_109), l_123))));
            }
        }
    }
    for (g_115 = 0; (g_115 < 30); g_115 = safe_add_func_int8_t_s_s(g_115, 3))
    { 
        int8_t l_139[3][3] = {{0xDCL,0xDCL,0x50L},{0xD4L,0xD4L,0xDCL},{0xD4L,0xD4L,0xDCL}};
        int32_t l_144[2][4] = {{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)}};
        int i, j;
        l_139[0][2] &= (g_104 < ((l_89 | (safe_sub_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((((((g_138[0] = (((0xCABDL > (-7L)) ^ p_13) ^ p_13)) & 254UL) == 0xE56A0368L) , l_88) >= l_87), 1UL)) != 0x0E2D0DC5L), l_109))) , p_13));
        g_99 ^= 0L;
        l_144[1][1] |= ((((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((0x4E02L >= ((l_139[0][2] == l_109) | l_88)), g_108)), p_13)) <= (-1L)) ^ p_13) ^ 1UL);
    }
    return l_87;
}



static int16_t  func_14(int16_t  p_15, uint32_t  p_16, int32_t  p_17, int8_t  p_18, int16_t  p_19)
{ 
    int64_t l_45[3][2] = {{1L,(-1L)},{(-1L),1L},{(-1L),(-1L)}};
    int32_t l_48 = 0xFFFBC9EEL;
    uint8_t l_81 = 1UL;
    int i, j;
    if (((p_16 = (safe_lshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_div_func_int64_t_s_s(l_45[2][0], g_8)) <= (l_45[2][1] < p_18)), g_31)) | l_45[2][0]), g_5[2])), l_45[2][0])), p_17)) & g_9), 2))) ^ p_15))
    { 
        uint8_t l_49 = 0x5EL;
        int32_t l_70 = (-9L);
        for (p_18 = 1; (p_18 >= 0); p_18 -= 1)
        { 
            l_48 = ((safe_lshift_func_uint8_t_u_u((g_5[2] == (p_18 == (g_31 == 0x06AB81D4L))), 4)) && 0xF7A3L);
            return l_49;
        }
        for (p_15 = 0; (p_15 >= (-9)); p_15 = safe_sub_func_uint32_t_u_u(p_15, 3))
        { 
            int32_t l_71 = 1L;
            for (l_49 = 11; (l_49 < 18); l_49 = safe_add_func_uint16_t_u_u(l_49, 7))
            { 
                --g_54;
                return l_48;
            }
            for (p_17 = 0; (p_17 > (-27)); --p_17)
            { 
                uint8_t l_69 = 0x09L;
                g_59[0][1] = 0x4FFA2B87L;
                l_48 |= (((l_71 = (((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((+(safe_rshift_func_int8_t_s_u(((l_69 == 0x0730A04A8F9B1095LL) || (l_70 = p_15)), 5))), 0x30L)) | g_9), g_31)) > p_19), p_17)) >= p_15) != l_71)) , 0xDAL) != p_19);
            }
        }
        g_76 ^= (safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_15, 0x73L)), (p_15 < g_8)));
    }
    else
    { 
        l_48 = ((safe_mul_func_uint8_t_u_u(g_9, g_59[0][2])) < (g_82 = ((-1L) < l_81)));
    }
    return l_81;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_59[i][j], "g_59[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_138[i], "g_138[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_160[i][j], "g_160[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_169[i], "g_169[i]", print_hash_value);

    }
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
