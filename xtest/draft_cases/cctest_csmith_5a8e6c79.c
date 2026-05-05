// SPDX-License-Identifier: MIT
// cctest_csmith_5a8e6c79.c --- cctest case csmith_5a8e6c79 (csmith seed 1519283321)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb9be320d */

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

// Options:   -s 1519283321 -o /tmp/csmith_gen_in4k5fuy/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint32_t g_5 = 0xDB34E6D4L;
static int8_t g_13 = 1L;
static uint32_t g_15 = 0xCCD2466EL;
static uint8_t g_18 = 0UL;
static uint16_t g_22[1] = {0xBF5FL};
static uint32_t g_33 = 0xD757520CL;
static uint32_t g_41 = 0x1A2955E3L;
static int64_t g_47[3][3] = {{0x03003393D3B28C33LL,0x1DE2FC23FAAB93B5LL,0x03003393D3B28C33LL},{0xE7DFBF73ECB6AEF2LL,0xE7DFBF73ECB6AEF2LL,0xE7DFBF73ECB6AEF2LL},{0x03003393D3B28C33LL,0x1DE2FC23FAAB93B5LL,0x03003393D3B28C33LL}};
static int8_t g_53 = 0x19L;
static int32_t g_71 = (-6L);
static int16_t g_79 = (-5L);
static uint32_t g_81[3][3] = {{0x8117D142L,0x8117D142L,0x8117D142L},{0x8117D142L,0x8117D142L,0x8117D142L},{0x8117D142L,0x8117D142L,0x8117D142L}};
static int32_t g_98 = (-2L);
static uint64_t g_114 = 0UL;



static uint16_t  func_1(void);
static int32_t  func_2(int32_t  p_3, uint8_t  p_4);
static uint32_t  func_6(uint32_t  p_7, int16_t  p_8, uint8_t  p_9, const int64_t  p_10, uint32_t  p_11);




static uint16_t  func_1(void)
{ 
    int8_t l_12 = 0xA5L;
    int32_t l_84 = 0x2D143BF1L;
    int32_t l_121 = 0xE2F81461L;
    uint32_t l_123 = 0xCD6F842CL;
    l_121 |= func_2((((g_5 & (((l_84 = (func_6(g_5, (g_13 |= l_12), g_5, l_12, l_12) == l_12)) , l_12) >= l_12)) & l_12) > g_79), l_12);
    l_123 = (0xA8L ^ (safe_unary_minus_func_uint16_t_u(65529UL)));
    return g_81[2][1];
}



static int32_t  func_2(int32_t  p_3, uint8_t  p_4)
{ 
    uint8_t l_85 = 255UL;
    int32_t l_90[2];
    uint16_t l_97 = 8UL;
    int i;
    for (i = 0; i < 2; i++)
        l_90[i] = (-1L);
    for (g_18 = 0; (g_18 <= 0); g_18 += 1)
    { 
        int32_t l_106[1];
        int i;
        for (i = 0; i < 1; i++)
            l_106[i] = 2L;
        l_85--;
        for (g_15 = 0; (g_15 <= 2); g_15 += 1)
        { 
            int i, j;
            l_90[1] = (safe_div_func_uint64_t_u_u(0xCF61366E2C43C23CLL, ((g_22[g_18] || (0x6DABD80E459F6D15LL <= g_81[g_15][g_15])) | 0x9BF6L)));
            g_98 = (safe_mod_func_int8_t_s_s((l_97 = (safe_add_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u(p_3, g_22[g_18])) <= 0xD3DDL), 0L))), 5UL));
        }
        if ((safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s((g_22[g_18] != (l_106[0] ^= (((safe_sub_func_int8_t_s_s(0x3EL, (safe_div_func_uint64_t_u_u(0x428C401F3C7B641BLL, 1L)))) , 3L) == g_22[g_18]))))) & p_4), 0x87L)))
        { 
            for (l_85 = 0; (l_85 == 57); l_85++)
            { 
                int8_t l_113 = 1L;
                l_106[0] = ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((l_90[0] = (p_4 , p_4)), g_13)), p_4)) , p_3);
                g_114++;
            }
        }
        else
        { 
            l_90[0] = (safe_mod_func_uint32_t_u_u(0xD3F44F86L, (safe_rshift_func_int16_t_s_u(((g_41 , ((g_98 |= p_3) || g_41)) > 5UL), 6))));
        }
    }
    return p_4;
}



static uint32_t  func_6(uint32_t  p_7, int16_t  p_8, uint8_t  p_9, const int64_t  p_10, uint32_t  p_11)
{ 
    uint8_t l_14[2];
    int32_t l_21 = (-2L);
    int32_t l_39 = 1L;
    int32_t l_40 = 0x50D5D742L;
    uint32_t l_70[2][4] = {{18446744073709551609UL,0xB361F168L,18446744073709551609UL,0xB361F168L},{18446744073709551609UL,0xB361F168L,18446744073709551609UL,0xB361F168L}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_14[i] = 0xC8L;
    for (p_9 = 0; (p_9 <= 1); p_9 += 1)
    { 
        uint16_t l_31[4][2];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_31[i][j] = 0xD3E5L;
        }
        for (g_13 = 0; (g_13 <= 1); g_13 += 1)
        { 
            for (p_11 = 0; p_11 < 2; p_11 += 1)
            {
                l_14[p_11] = 0x51L;
            }
            for (p_11 = 0; (p_11 <= 1); p_11 += 1)
            { 
                g_15 = 0xCA27289FL;
            }
        }
        if ((safe_mul_func_int16_t_s_s(l_14[p_9], l_14[p_9])))
        { 
            g_18--;
            for (p_7 = 0; (p_7 <= 1); p_7 += 1)
            { 
                l_21 ^= g_15;
                g_22[0]--;
            }
            if (p_11)
                break;
        }
        else
        { 
            int8_t l_25 = 0xA0L;
            for (p_11 = 0; (p_11 <= 1); p_11 += 1)
            { 
                int32_t l_26 = 0L;
                int32_t l_32 = (-1L);
                l_26 = l_25;
                g_33 ^= (((p_10 > (p_7 <= ((safe_rshift_func_int16_t_s_u((((l_21 = (((safe_mod_func_uint8_t_u_u((((0xC116E074F0E4F200LL != 18446744073709551607UL) , 1L) && g_15), g_15)) | l_25) >= l_31[1][0])) | l_32) < g_5), l_26)) , 0xDDBCL))) && l_31[3][1]) >= (-8L));
                return l_25;
            }
        }
    }
    g_41 = (l_40 = (l_21 |= (safe_mod_func_int32_t_s_s((~(((safe_mul_func_uint16_t_u_u(l_14[1], (l_39 = l_14[1]))) , (l_39 , l_39)) <= g_15)), l_14[1]))));
    if (p_10)
    { 
        uint64_t l_44 = 5UL;
        int8_t l_48 = (-9L);
        int32_t l_57 = 0x818A8DC8L;
        if ((0xA8L < ((((safe_add_func_uint16_t_u_u(l_44, ((g_22[0] ^= (((safe_mul_func_uint8_t_u_u((((((g_47[0][2] = (((((p_8 , 0UL) < 0x8AFCL) == p_7) , 0xCBL) & 0x93L)) >= p_9) , 0x85FAL) ^ l_44) && p_11), 3UL)) & l_48) < g_15)) >= p_11))) != 1UL) <= g_33) <= g_41)))
        { 
            for (p_7 = 0; (p_7 <= 0); p_7 += 1)
            { 
                int i;
                g_53 = (safe_lshift_func_uint8_t_u_u((l_14[p_7] | (safe_div_func_int16_t_s_s((65528UL != g_22[p_7]), g_22[p_7]))), p_10));
            }
            l_57 ^= (safe_mod_func_uint8_t_u_u((0xCED4B89D53C4A2FBLL != (!(g_22[0] , (0x8B8ECDE2L < g_41)))), 6UL));
        }
        else
        { 
            for (l_48 = (-17); (l_48 == (-12)); l_48 = safe_add_func_int64_t_s_s(l_48, 6))
            { 
                return p_10;
            }
        }
        g_71 = (l_39 = (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint64_t_u_u((l_40 ^= (((safe_mod_func_int8_t_s_s(p_8, p_8)) , (safe_sub_func_uint64_t_u_u(((((safe_add_func_int8_t_s_s(g_33, 0x53L)) <= g_13) , p_10) < (-10L)), p_10))) & l_21)), 18446744073709551606UL)) ^ l_70[1][0]), p_8)));
    }
    else
    { 
        for (p_8 = 0; (p_8 <= 1); p_8 += 1)
        { 
            uint16_t l_78 = 0x27D3L;
            for (l_21 = 0; (l_21 <= 2); l_21 += 1)
            { 
                int i, j;
                l_39 = 0xB13CC227L;
                if (l_70[p_8][(l_21 + 1)])
                    continue;
                l_78 &= (((0x052BDF33L >= ((safe_rshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((g_47[l_21][l_21] , (65535UL | g_47[l_21][l_21])) < 0xCB0F1F8A7072EE8FLL), g_47[l_21][(p_8 + 1)])), g_33)), g_71)) > l_40)) || p_8) ^ 0x29F1C2FFF4405564LL);
            }
            for (l_40 = 0; (l_40 <= 1); l_40 += 1)
            { 
                int32_t l_80[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_80[i] = 0x12DD28D5L;
                --g_81[1][2];
            }
            for (g_18 = 0; (g_18 <= 0); g_18 += 1)
            { 
                int i, j;
                return l_70[g_18][g_18];
            }
        }
    }
    return p_7;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_22[i], "g_22[i]", print_hash_value);

    }
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_47[i][j], "g_47[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_81[i][j], "g_81[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
