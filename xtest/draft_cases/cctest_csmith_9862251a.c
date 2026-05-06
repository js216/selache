// SPDX-License-Identifier: MIT
// cctest_csmith_9862251a.c --- cctest case csmith_9862251a (csmith seed 2556568858)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xacbceb8a */

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

// Options:   -s 2556568858 -o /tmp/csmith_gen__yltazas/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int8_t g_16 = 0x95L;
static int16_t g_21 = 0x865BL;
static int64_t g_29 = 0x20920A6FF609D70CLL;
static int32_t g_84 = 0x266DE40CL;
static int32_t g_86[2] = {0x5BC3FA0EL,0x5BC3FA0EL};
static int16_t g_87 = 0x641BL;
static int32_t g_88 = (-1L);
static uint64_t g_89 = 18446744073709551607UL;
static int32_t g_121[1][1] = {{0xA087AC20L}};
static uint8_t g_122 = 255UL;
static int8_t g_131[3] = {(-1L),(-1L),(-1L)};
static int32_t g_150[1] = {(-5L)};
static uint64_t g_237[1][3] = {{0xBC24C8DAF8A5A028LL,0xBC24C8DAF8A5A028LL,0xBC24C8DAF8A5A028LL}};
static uint32_t g_248 = 0x3D05821FL;
static uint64_t g_249[2][3] = {{0x2B67023329542E10LL,0x2B67023329542E10LL,0x2B67023329542E10LL},{5UL,5UL,5UL}};



static int64_t  func_1(void);
static int32_t  func_2(int32_t  p_3, const uint8_t  p_4, int32_t  p_5, uint8_t  p_6, uint64_t  p_7);
static int64_t  func_13(int32_t  p_14, int16_t  p_15);




static int64_t  func_1(void)
{ 
    uint8_t l_10 = 0x48L;
    int8_t l_22[2][1];
    int32_t l_186 = 1L;
    int8_t l_223 = 0L;
    int8_t l_263 = (-7L);
    uint32_t l_264 = 0xEDEDEB66L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_22[i][j] = 1L;
    }
    g_150[0] |= func_2((safe_mul_func_int16_t_s_s(l_10, ((safe_div_func_int64_t_s_s(func_13(g_16, ((((safe_mul_func_uint8_t_u_u((g_21 = (safe_sub_func_int32_t_s_s(g_16, 0xCF257925L))), l_10)) , l_10) , 2L) || l_22[0][0])), 0x6AEAB66969E96C9FLL)) | l_22[0][0]))), g_16, g_16, g_16, l_10);
    if (((((!(((safe_mod_func_int16_t_s_s(0xA6FBL, (g_29 ^ (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((g_87 = (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(0x62L, l_22[0][0])), 0xB5B8L))), g_16)), g_131[0])) <= l_22[0][0]), l_10)), l_22[1][0])), l_10))))) | l_10) ^ l_22[0][0])) == g_121[0][0]) >= l_10) <= g_150[0]))
    { 
        int8_t l_185 = 0x86L;
        int32_t l_193 = 0x6D6E16A9L;
        int16_t l_195[2];
        int i;
        for (i = 0; i < 2; i++)
            l_195[i] = (-4L);
        for (g_84 = 0; (g_84 <= 0); g_84 += 1)
        { 
            int i;
            l_186 = ((g_150[g_84] && (safe_lshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u((((++g_89) | (((!(safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s(((g_150[g_84] < (safe_rshift_func_int16_t_s_s((g_121[0][0] || 0x79L), 6))) > 0L), 0x2754L)) , l_185) , g_122), g_150[g_84])) < l_10), g_150[g_84])) >= g_86[0]), 0))) , g_121[0][0]) < 0UL)) > g_16), 0xB4F4D21A526C73BFLL)), 2))) == g_131[2]);
            l_193 = (((safe_mul_func_int16_t_s_s(g_84, (safe_mod_func_int64_t_s_s((((safe_lshift_func_int8_t_s_u(1L, (l_185 < g_150[g_84]))) > (-1L)) > g_89), g_150[g_84])))) , g_16) | 0x1F488438L);
            for (g_122 = 0; (g_122 <= 0); g_122 += 1)
            { 
                int i, j;
                if (l_22[g_84][g_122])
                    break;
                g_150[g_84] ^= 7L;
            }
        }
        for (l_185 = 2; (l_185 >= 0); l_185 -= 1)
        { 
            int32_t l_194 = 0x2B91D3D6L;
            int i;
            l_194 = (g_121[0][0] |= g_131[l_185]);
            l_194 &= ((l_195[1] != (((safe_mod_func_int64_t_s_s((-1L), g_89)) == 1UL) , g_86[0])) >= 18446744073709551607UL);
            if (l_22[1][0])
                break;
            for (l_193 = 2; (l_193 >= 0); l_193 -= 1)
            { 
                uint32_t l_198 = 1UL;
                l_186 &= g_131[2];
                ++l_198;
            }
        }
    }
    else
    { 
        uint64_t l_225 = 18446744073709551609UL;
        int32_t l_226 = 0xDB04045AL;
        uint32_t l_228 = 0xA7C34602L;
        int32_t l_238 = (-1L);
        for (g_29 = 0; (g_29 < 16); ++g_29)
        { 
            int64_t l_211 = (-5L);
            int32_t l_212 = 0x3B0C0423L;
            int64_t l_224 = (-1L);
            for (g_88 = (-13); (g_88 <= (-21)); g_88 = safe_sub_func_uint32_t_u_u(g_88, 5))
            { 
                return g_86[1];
            }
            l_212 = (((safe_lshift_func_uint16_t_u_s((0L || (safe_add_func_uint16_t_u_u(((l_22[0][0] , (l_211 ^= ((safe_mod_func_int8_t_s_s(((g_88 & g_150[0]) < g_84), l_186)) , l_22[0][0]))) >= g_86[1]), l_22[0][0]))), g_150[0])) || 0UL) & g_87);
            l_212 = (safe_unary_minus_func_int32_t_s((g_150[0] | (safe_mul_func_int8_t_s_s((-1L), ((safe_mod_func_int64_t_s_s((((l_225 = ((!((((safe_mod_func_uint64_t_u_u((((((safe_mod_func_uint64_t_u_u(0UL, l_223)) , g_131[2]) <= l_224) , g_89) > g_121[0][0]), g_86[1])) && g_121[0][0]) && 0xA217E51FL) , l_22[0][0])) , 0x8DDFECA67439DE11LL)) ^ 18446744073709551615UL) | g_16), l_226)) & 0x82L))))));
        }
        g_121[0][0] &= (+l_228);
        for (l_226 = (-22); (l_226 > (-30)); l_226 = safe_sub_func_int64_t_s_s(l_226, 1))
        { 
            int32_t l_247 = 1L;
            l_238 = (safe_lshift_func_uint8_t_u_s(((-6L) > (l_186 = (safe_add_func_uint16_t_u_u(((l_22[0][0] , (safe_mul_func_int8_t_s_s((g_237[0][0] || g_237[0][0]), 1L))) | l_228), l_228)))), 0));
            g_150[0] = (safe_sub_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(l_10, l_225)), (safe_rshift_func_int16_t_s_s(l_238, 11))));
            g_249[1][1] ^= ((g_150[0] = 7L) > ((safe_div_func_int8_t_s_s(l_247, ((g_248 ^ (-2L)) , l_226))) == g_16));
        }
    }
    for (l_223 = 5; (l_223 <= 19); l_223 = safe_add_func_uint16_t_u_u(l_223, 1))
    { 
        uint64_t l_260 = 0xBDEAF15A9D2C52D8LL;
        int32_t l_262 = 0x324AF3C8L;
        l_264 ^= (l_263 = (safe_sub_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_237[0][0], (((safe_rshift_func_int16_t_s_u((l_260 >= (+(l_22[0][0] & g_84))), g_249[1][1])) < 2UL) >= l_22[0][0]))), 4)) ^ 0x055D4220F00DC925LL) && l_262) , l_223), g_86[1])));
    }
    return l_10;
}



static int32_t  func_2(int32_t  p_3, const uint8_t  p_4, int32_t  p_5, uint8_t  p_6, uint64_t  p_7)
{ 
    uint16_t l_63 = 65535UL;
    int32_t l_64[4][3] = {{1L,1L,1L},{0xEB8FC401L,0xD024BFCCL,0xEB8FC401L},{1L,1L,1L},{0xEB8FC401L,0xD024BFCCL,0xEB8FC401L}};
    uint32_t l_65 = 0xBFF020A7L;
    int32_t l_66 = (-4L);
    int32_t l_142[2][3] = {{0L,0L,0L},{0x006BDA4CL,0x006BDA4CL,0x006BDA4CL}};
    int32_t l_144 = 5L;
    uint16_t l_145 = 2UL;
    int i, j;
    l_66 &= (safe_rshift_func_int16_t_s_s((((l_64[2][0] = ((safe_mul_func_int8_t_s_s(g_29, (g_16 || (1L == l_63)))) , (-1L))) , g_29) >= g_16), l_65));
    for (g_16 = 0; (g_16 <= 8); g_16++)
    { 
        int8_t l_73[2][4] = {{6L,6L,6L,6L},{6L,6L,6L,6L}};
        int32_t l_83 = 0xFEC891F7L;
        int32_t l_85 = 0x677DABF2L;
        int32_t l_134[4] = {0xC4670F82L,0xC4670F82L,0xC4670F82L,0xC4670F82L};
        int32_t l_135 = 0x427E885CL;
        int16_t l_137 = 1L;
        int16_t l_140 = 1L;
        int i, j;
        if ((((l_64[2][0] != p_4) < ((safe_lshift_func_uint8_t_u_s(((g_29 | p_5) <= g_21), g_29)) != g_29)) <= l_73[0][1]))
        { 
            return g_16;
        }
        else
        { 
            int32_t l_74[1][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_74[i][j] = 0x14E9C127L;
            }
            if (l_74[0][0])
                break;
            l_64[2][0] = (safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((--g_89) , (safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_86[1], (safe_mod_func_int16_t_s_s((l_74[0][0] , (0x6EL == 0xCCL)), g_29)))), p_6)) == p_6) != (-1L)), g_21)), g_84))) & l_66), 0)), g_86[1])), 0x835F01DAL)), g_86[1]));
        }
        for (p_7 = 0; (p_7 <= 1); p_7 += 1)
        { 
            uint32_t l_129 = 0xCF828E4EL;
            int32_t l_130 = 0L;
            int32_t l_132 = 9L;
            int32_t l_133 = 0L;
            int32_t l_136 = (-8L);
            int32_t l_138 = 0x16A1B7C3L;
            int32_t l_139 = (-1L);
            int32_t l_141 = 0x0CD882E3L;
            int32_t l_143[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_143[i][j] = 0x083140AFL;
            }
            p_5 = (l_64[(p_7 + 2)][(p_7 + 1)] = (safe_unary_minus_func_uint16_t_u(((safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((l_130 ^= (((((((safe_div_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((((g_122--) ^ g_16) , ((safe_mul_func_int16_t_s_s(((((((safe_mod_func_int64_t_s_s((g_88 | 0x618A8B4E140BD20ALL), p_5)) != g_29) > 0x17L) || g_87) != 0xC97C2B18L) > 0L), p_3)) ^ p_6)), g_121[0][0])), p_5)) | p_3), g_88)) & g_29), g_88)) <= 0x0C02A0D8654C91E5LL) , g_86[1]) & p_7) , l_129) , p_6) < 4294967286UL)), 0x0B97FFB89B2A2CB7LL)), 6L)), 1)), l_64[2][0])) ^ l_129) <= g_16), 0)) <= l_64[3][2]))));
            l_145++;
        }
        g_84 &= (safe_add_func_int8_t_s_s(p_6, 0x6DL));
    }
    return p_4;
}



static int64_t  func_13(int32_t  p_14, int16_t  p_15)
{ 
    int8_t l_27 = 0x29L;
    int32_t l_28 = 0x6758E356L;
    int32_t l_46 = (-2L);
    int32_t l_47[2];
    int i;
    for (i = 0; i < 2; i++)
        l_47[i] = 0x00B46F9FL;
lbl_57:
    if ((safe_mod_func_uint16_t_u_u((g_29 ^= (safe_lshift_func_int8_t_s_s((((l_27 = g_16) | (p_14 , p_15)) | l_28), g_21))), 65528UL)))
    { 
        int64_t l_30 = 0x89EC0021FBB9CF7DLL;
        p_14 &= (l_30 & (safe_lshift_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(g_16, 3UL)) | 8UL) > p_15), 4)));
        return p_15;
    }
    else
    { 
        int32_t l_44 = 0x7B332E0CL;
        int32_t l_45 = 1L;
        l_47[1] = (safe_rshift_func_uint8_t_u_u((l_46 = (safe_sub_func_uint8_t_u_u(((+(p_14 &= (((l_45 |= (safe_mul_func_uint8_t_u_u((l_44 = ((safe_sub_func_uint8_t_u_u((((65535UL | 0xCE40L) == (l_28 = (p_15 != 0x99B9L))) > l_44), g_16)) | l_27)), g_21))) > 0L) | 0x22L))) | g_16), 0xF2L))), 6));
    }
    for (g_21 = 0; (g_21 != 25); g_21 = safe_add_func_int32_t_s_s(g_21, 1))
    { 
        p_14 ^= 0x05746AC1L;
    }
    for (g_21 = 2; (g_21 <= (-19)); g_21 = safe_sub_func_uint8_t_u_u(g_21, 2))
    { 
        uint32_t l_52 = 0xD63F7CECL;
        p_14 = l_52;
        for (p_15 = 19; (p_15 > 17); p_15 = safe_sub_func_int8_t_s_s(p_15, 1))
        { 
            for (g_29 = 15; (g_29 != 15); g_29 = safe_add_func_uint16_t_u_u(g_29, 8))
            { 
                if (p_15)
                    goto lbl_57;
            }
        }
        l_47[0] &= (safe_unary_minus_func_uint64_t_u(18446744073709551613UL));
    }
    return p_15;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_86[i], "g_86[i]", print_hash_value);

    }
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_121[i][j], "g_121[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_131[i], "g_131[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_150[i], "g_150[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_237[i][j], "g_237[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_248, "g_248", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_249[i][j], "g_249[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
