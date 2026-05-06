// SPDX-License-Identifier: MIT
// cctest_csmith_5378c4dd.c --- cctest case csmith_5378c4dd (csmith seed 1400423645)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdd4e0c98 */

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

// Options:   -s 1400423645 -o /tmp/csmith_gen_48gjgxb5/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int16_t g_6[2][1] = {{(-6L)},{(-6L)}};
static int8_t g_7 = 0x1FL;
static uint32_t g_8 = 0xE3CF9575L;
static uint32_t g_33 = 1UL;
static uint64_t g_67[1] = {1UL};
static int32_t g_69 = (-2L);
static uint16_t g_70 = 0x4487L;
static uint16_t g_105 = 0UL;
static uint32_t g_107 = 4294967287UL;
static int32_t g_125 = 0xF6180BEBL;
static uint16_t g_126 = 1UL;
static uint16_t g_139[2] = {65528UL,65528UL};
static int8_t g_159 = 0xC9L;
static int16_t g_163 = 1L;
static int32_t g_167 = (-8L);



static int8_t  func_1(void);
static int32_t  func_16(int8_t  p_17, int32_t  p_18, int32_t  p_19);
static uint8_t  func_23(uint32_t  p_24, uint64_t  p_25, uint64_t  p_26, int16_t  p_27, uint32_t  p_28);




static int8_t  func_1(void)
{ 
    int32_t l_2 = (-6L);
    int32_t l_3[4] = {0x75286E87L,0x75286E87L,0x75286E87L,0x75286E87L};
    int32_t l_4 = (-1L);
    int32_t l_5[1];
    uint16_t l_15[1];
    uint16_t l_34 = 0xC005L;
    uint32_t l_137 = 0x64DAF6BEL;
    int16_t l_158 = 8L;
    int i;
    for (i = 0; i < 1; i++)
        l_5[i] = 0xCA2961C0L;
    for (i = 0; i < 1; i++)
        l_15[i] = 0UL;
    --g_8;
    if ((((safe_mul_func_uint8_t_u_u(g_7, (safe_mod_func_int64_t_s_s((((g_6[1][0] <= g_8) != g_7) <= l_3[1]), 1L)))) , l_15[0]) || l_3[1]))
    { 
        uint16_t l_20 = 0xE9ABL;
        int16_t l_30 = (-1L);
        g_107 |= func_16((l_20 , (safe_add_func_uint8_t_u_u(func_23((safe_unary_minus_func_int32_t_s(l_30)), ((safe_mod_func_uint32_t_u_u((((g_33 = g_6[1][0]) , 0x15L) != l_30), g_6[1][0])) == g_7), g_7, l_34, g_7), g_6[1][0]))), l_3[1], g_69);
    }
    else
    { 
        int16_t l_110 = 4L;
        int32_t l_111 = 6L;
        int32_t l_162 = 0xA5778D35L;
        uint16_t l_179 = 0x2C58L;
        uint8_t l_183 = 1UL;
lbl_190:
        if (((safe_mod_func_uint8_t_u_u(((l_15[0] && ((g_33++) , ((safe_sub_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((l_5[0] | (safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint16_t_u_u(0x5724L, 11)) | l_3[0])))) < l_110), 0x4FL)), l_15[0])) < l_4), 0x5A86L)) | g_67[0]))) < g_8), l_5[0])) & l_15[0]))
        { 
            uint32_t l_136 = 18446744073709551614UL;
            const uint8_t l_138[1][2] = {{250UL,250UL}};
            int32_t l_140[3][4] = {{0x3710A176L,0x78B5E36AL,0x732090DFL,0x78B5E36AL},{0x78B5E36AL,1L,0x732090DFL,0x732090DFL},{0x3710A176L,0x3710A176L,0x78B5E36AL,0x732090DFL}};
            int i, j;
            l_140[2][1] = ((((((g_139[0] = ((l_5[0] = (safe_add_func_uint8_t_u_u((g_8 | (++g_126)), l_111))) & (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((((+((safe_lshift_func_uint8_t_u_u(0xE2L, l_136)) , l_137)) != l_3[0]) && g_70) , 4UL), 1)), l_138[0][1])))) , 0x04L) <= (-10L)) == l_138[0][1]) , 5UL) && g_139[0]);
        }
        else
        { 
            int32_t l_141 = 7L;
            l_141 = g_67[0];
            return g_105;
        }
        if (((safe_lshift_func_uint8_t_u_u(g_33, (safe_add_func_uint8_t_u_u(l_2, (l_111 = (g_159 = ((((safe_mul_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((((((safe_rshift_func_int16_t_s_u(((~((safe_add_func_int64_t_s_s(((+((safe_add_func_uint64_t_u_u(0UL, l_111)) & g_6[1][0])) ^ (-9L)), g_69)) > l_4)) & g_139[0]), l_110)) >= l_110) | g_69) == 0x68823E01L) , g_139[1]), l_158)), g_69)) & l_110) >= l_111) > l_111))))))) == g_7))
        { 
            int32_t l_177 = 0x4BFD0F75L;
            if ((g_8 | ((safe_mul_func_uint16_t_u_u(((g_6[1][0] ^ ((g_126 >= g_6[1][0]) >= 65535UL)) ^ 0x75L), 65535UL)) < g_70)))
            { 
lbl_164:
                g_69 &= l_162;
                return g_163;
            }
            else
            { 
                if (l_4)
                    goto lbl_164;
            }
            for (l_4 = 28; (l_4 > (-21)); l_4 = safe_sub_func_int32_t_s_s(l_4, 1))
            { 
                int64_t l_168 = 1L;
                int32_t l_178[4][4] = {{(-5L),0xA0BCAFD4L,0xA0BCAFD4L,(-5L)},{0xA0BCAFD4L,(-5L),0xA0BCAFD4L,0xA0BCAFD4L},{(-5L),(-5L),1L,(-5L)},{(-5L),0xA0BCAFD4L,0xA0BCAFD4L,(-5L)}};
                int32_t l_180 = 8L;
                int i, j;
                g_167 = (g_69 = 0x7480A48EL);
                l_180 = (((l_168 ^ (safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((((l_179 = ((l_178[0][2] = (l_15[0] || (((((((safe_div_func_uint8_t_u_u(0UL, 0x27L)) , l_5[0]) , g_159) == l_177) && l_4) , l_168) != l_162))) < g_7)) , 1L) , 4294967295UL) && l_168), g_167)) ^ 0x0CL), l_158)), l_177))) <= g_125) | l_168);
            }
        }
        else
        { 
            if (((((safe_mod_func_uint32_t_u_u((--l_183), (((safe_rshift_func_int16_t_s_s(g_7, ((safe_div_func_int8_t_s_s((g_159 = ((((g_167 = g_6[0][0]) & (0x47L && l_34)) == l_162) == g_67[0])), l_162)) , g_126))) <= g_70) && 0xF9525C662F218DAELL))) , 0x813BED6CL) , g_8) != 1L))
            { 
                if (g_8)
                    goto lbl_190;
                l_162 = (((!g_126) , (safe_div_func_int32_t_s_s(((safe_add_func_int16_t_s_s(g_6[1][0], ((safe_div_func_uint16_t_u_u((l_111 , g_125), g_6[0][0])) <= g_167))) && 0x4E5047FAL), 0xC4768125L))) == g_6[1][0]);
            }
            else
            { 
                uint16_t l_198 = 1UL;
                return l_198;
            }
            for (g_159 = 0; (g_159 <= 0); g_159 += 1)
            { 
                int i;
                return l_15[g_159];
            }
        }
        for (g_33 = 0; (g_33 >= 22); g_33 = safe_add_func_int16_t_s_s(g_33, 6))
        { 
            l_162 = (safe_add_func_int16_t_s_s(((g_69 < 18446744073709551615UL) | (l_179 < 0L)), g_139[0]));
            if (g_139[1])
                break;
        }
    }
    return g_167;
}



static int32_t  func_16(int8_t  p_17, int32_t  p_18, int32_t  p_19)
{ 
    int8_t l_73 = 1L;
    int32_t l_74 = 0L;
    l_74 = ((((g_33 , p_18) & l_73) , 0xC1F29C70A1111CD9LL) && p_17);
    for (p_18 = 0; (p_18 < 10); p_18 = safe_add_func_uint16_t_u_u(p_18, 2))
    { 
        uint8_t l_96 = 0x18L;
        int32_t l_98 = 0xDA2E755EL;
        int32_t l_99 = (-1L);
        for (l_73 = (-29); (l_73 >= (-13)); l_73 = safe_add_func_uint64_t_u_u(l_73, 3))
        { 
            int16_t l_95 = 0x8C68L;
            int32_t l_104 = 0xBC3FCB6EL;
            for (p_19 = 0; (p_19 > (-23)); p_19 = safe_sub_func_uint64_t_u_u(p_19, 6))
            { 
                int8_t l_97 = (-9L);
                int32_t l_106 = (-1L);
                l_99 ^= (g_69 = (l_98 ^= (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(g_6[0][0], (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(l_95, ((((l_97 = l_96) | p_17) & g_70) <= p_17))) , g_6[1][0]), 5)), 5)), 1)), p_19)) , g_67[0]) < 0xB3L))) && l_74), l_96))));
                l_106 = ((g_67[0] = (safe_div_func_int32_t_s_s((g_69 = g_8), (((g_105 = (g_6[1][0] |= (l_104 |= (safe_sub_func_int8_t_s_s((((((((l_95 > l_96) > 0x12C12148L) || 0xEAL) != (-1L)) < 0x45L) == 0x9F5ED801979D566FLL) , g_67[0]), l_99))))) | 65535UL) && p_17)))) == l_74);
                if (g_70)
                    break;
            }
            return l_104;
        }
    }
    return l_74;
}



static uint8_t  func_23(uint32_t  p_24, uint64_t  p_25, uint64_t  p_26, int16_t  p_27, uint32_t  p_28)
{ 
    uint64_t l_37 = 2UL;
    int32_t l_38 = 0x0E1C2A91L;
lbl_55:
    l_38 = (0x53L && (safe_div_func_int64_t_s_s(((4UL | l_37) <= p_24), g_7)));
    if (((safe_sub_func_uint64_t_u_u(((-1L) & ((0L >= ((g_6[1][0] <= g_6[0][0]) >= g_6[1][0])) >= 255UL)), p_24)) >= g_6[1][0]))
    { 
        uint32_t l_49 = 1UL;
        int32_t l_51 = (-4L);
        int32_t l_52 = 0xE47BEBA6L;
        l_52 &= ((safe_add_func_int8_t_s_s(((((((safe_rshift_func_uint8_t_u_s((l_38 = (safe_mul_func_uint8_t_u_u((l_49 = 246UL), (!(((((g_8 = (p_24 , p_26)) , 0xB3L) != g_6[1][0]) & 1UL) , g_6[1][0]))))), g_6[1][0])) != l_37) | l_51) | 0L) >= l_51) && 1UL), 0x9DL)) & 1UL);
    }
    else
    { 
        uint8_t l_64 = 0x53L;
        int64_t l_68 = 5L;
        if ((safe_lshift_func_int8_t_s_u(4L, l_38)))
        { 
            for (l_37 = 0; (l_37 <= 0); l_37 += 1)
            { 
                if (p_26)
                    goto lbl_55;
                l_64 |= (safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((g_7 = g_6[1][0]) < g_6[1][0]), (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((g_33 <= 0xED535453L) ^ p_25), l_38)), g_6[0][0])))) ^ l_38), 0xD355714AL));
            }
            for (p_26 = 0; (p_26 <= 0); p_26 += 1)
            { 
                if (p_25)
                    break;
            }
        }
        else
        { 
            g_67[0] = (safe_rshift_func_int16_t_s_u(((0x39D6F4693715CD22LL > 0xD363BF156DE04B38LL) != (g_6[0][0] > g_6[1][0])), l_38));
            ++g_70;
        }
    }
    return g_6[1][0];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_6[i][j], "g_6[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_67[i], "g_67[i]", print_hash_value);

    }
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_139[i], "g_139[i]", print_hash_value);

    }
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
