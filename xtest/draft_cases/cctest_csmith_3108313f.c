// SPDX-License-Identifier: MIT
// cctest_csmith_3108313f.c --- cctest case csmith_3108313f (csmith seed 822620479)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd3076fff */

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

// Options:   -s 822620479 -o /tmp/csmith_gen_vj1e_odl/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_3 = (-6L);
static int32_t g_4 = 6L;
static uint32_t g_25 = 0UL;
static int64_t g_47 = 0x2406135443C7F34FLL;
static int8_t g_48 = 0L;
static uint16_t g_49 = 65527UL;
static uint64_t g_58 = 0x7713999EA3421904LL;
static uint32_t g_69 = 0x97EEE40BL;
static int32_t g_81[4][1] = {{0L},{0L},{0L},{0L}};
static uint16_t g_114 = 0x83D3L;
static uint32_t g_161 = 0x58DE09C5L;
static int64_t g_171 = 0x7A39A48B500B87C0LL;
static const uint32_t g_185 = 5UL;



static const int32_t  func_1(void);
static int32_t  func_7(int32_t  p_8, uint16_t  p_9, uint32_t  p_10, uint8_t  p_11, uint8_t  p_12);
static int8_t  func_13(uint32_t  p_14, const uint16_t  p_15);




static const int32_t  func_1(void)
{ 
    int64_t l_2[4][2] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
    int32_t l_121 = 0xFBB02A76L;
    int32_t l_125 = 0x15CB1E55L;
    uint16_t l_127 = 0xFBA4L;
    int i, j;
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    { 
        int64_t l_16 = 0L;
        uint8_t l_100 = 0x0AL;
        uint16_t l_101 = 0xFD13L;
        uint32_t l_103 = 0xFD0E8CD9L;
        int32_t l_113[2][4] = {{(-7L),(-7L),(-7L),(-7L)},{(-7L),(-7L),(-7L),(-7L)}};
        uint64_t l_152 = 0xC559F5579FDBB315LL;
        int i, j;
        for (g_4 = 1; (g_4 >= 0); g_4 -= 1)
        { 
            uint16_t l_102 = 65535UL;
            int32_t l_115[2][2];
            uint64_t l_143 = 18446744073709551615UL;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_115[i][j] = (-1L);
            }
            l_102 |= (g_81[0][0] = ((safe_lshift_func_int16_t_s_u(((((func_7((func_13(l_2[(g_3 + 2)][g_4], ((2L != ((g_3 <= l_2[(g_3 + 2)][g_4]) <= 1L)) > l_16)) , 1L), g_3, g_3, l_2[(g_3 + 2)][g_4], l_2[3][1]) < g_48) >= l_100) >= l_2[(g_3 + 2)][g_4]) && l_101), l_101)) != l_2[3][0]));
            if (l_103)
            { 
                return g_4;
            }
            else
            { 
                g_114 = (l_113[1][2] = (+(safe_mod_func_int16_t_s_s((0x8C2BL || ((g_49 = ((safe_mul_func_int8_t_s_s(g_47, (((safe_lshift_func_uint16_t_u_s(g_3, 13)) > g_58) | 1UL))) >= l_2[(g_3 + 2)][g_4])) > g_48)), g_58))));
            }
            if (l_2[1][0])
                break;
            for (g_69 = 0; (g_69 <= 1); g_69 += 1)
            { 
                uint8_t l_116 = 0xFBL;
                int32_t l_119 = 1L;
                int32_t l_120 = 0x81BF5FEDL;
                int32_t l_122 = 0x7020143CL;
                int32_t l_123 = (-5L);
                int32_t l_124 = 0x8B6B2362L;
                int32_t l_126 = 0x59DA389BL;
                ++l_116;
                l_127--;
                g_81[3][0] = (((((((g_48 | (safe_sub_func_int32_t_s_s((l_126 || ((safe_add_func_uint64_t_u_u(((l_113[0][2] = ((((safe_add_func_uint64_t_u_u((l_119 ^= (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((~((((((((l_2[(g_3 + 2)][g_4] , l_126) , (-1L)) , l_127) >= g_25) >= 1UL) & l_113[0][2]) && l_143) & g_69)), g_58)), 246UL))), (-1L))) == l_127) && 0UL) < 0x5FBAE6C0L)) | 0L), l_124)) & g_48)), l_100))) && g_81[2][0]) || l_122) < l_100) && g_58) >= l_2[(g_3 + 2)][g_4]) ^ 0x837D81659199FBBDLL);
            }
        }
        for (l_127 = 0; (l_127 <= 1); l_127 += 1)
        { 
            int i, j;
            g_81[3][0] = (g_4 = (l_2[(g_3 + 2)][g_3] && g_49));
        }
        l_113[1][2] = (safe_mod_func_int8_t_s_s((l_121 = (g_81[2][0] & (g_4 , ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((g_47 ^= (safe_sub_func_int32_t_s_s(((((l_152--) && (safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((g_161 = l_103), 4)), 0x09L)), g_49))) || g_3) > l_125), l_101))), g_3)), 4)) , 0xFF72A521L)))), g_4));
        for (g_58 = 0; (g_58 <= 1); g_58 += 1)
        { 
            int16_t l_162 = 0xA934L;
            int32_t l_176 = 0x40517D7DL;
            g_81[2][0] &= l_162;
            for (l_121 = 1; (l_121 >= 0); l_121 -= 1)
            { 
                int i, j;
                if (l_113[g_58][g_3])
                    break;
                if (l_113[g_58][(g_58 + 1)])
                    break;
                l_113[g_58][(g_3 + 1)] = (((safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((l_125 = (safe_sub_func_int16_t_s_s((0x1583L < ((safe_add_func_uint64_t_u_u(((((g_49 && 0x3F7EE6340B5CEBA8LL) ^ g_3) | g_81[2][0]) >= g_171), l_113[1][2])) || g_171)), g_49))) , l_162), l_2[0][0])), g_81[1][0])) && l_125) < l_152);
            }
            if ((l_176 = ((((l_162 , (safe_rshift_func_int8_t_s_u(((safe_add_func_int64_t_s_s((18446744073709551615UL | (((g_49 ^ l_2[1][1]) && g_81[0][0]) & 0xC24F611E92AA66C7LL)), g_3)) & l_127), l_162))) & g_81[2][0]) , (-1L)) , l_121)))
            { 
                int16_t l_190 = 0x1CABL;
                l_113[1][2] |= ((safe_add_func_int32_t_s_s(((g_58 , (safe_mul_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(g_185, (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(0L, l_190)), g_48)))) >= (-8L)), 0xD3L)) != l_2[1][0]) && (-9L)), g_69))) & g_47), l_190)) & 0x6F392B18A95B55B5LL);
                return l_121;
            }
            else
            { 
                uint64_t l_197 = 18446744073709551610UL;
                l_176 &= (((((((safe_mul_func_int16_t_s_s(0x07BEL, 0x422BL)) <= ((((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_2[0][1] > l_125), 0xE288L)), 5L)) && l_197) , g_81[1][0]) >= g_48)) >= l_2[2][0]) , 0x651CL) != g_161) , (-3L)) <= 0xAE2510918F9528EELL);
            }
        }
    }
    return l_121;
}



static int32_t  func_7(int32_t  p_8, uint16_t  p_9, uint32_t  p_10, uint8_t  p_11, uint8_t  p_12)
{ 
    uint32_t l_40[4][2] = {{18446744073709551615UL,1UL},{18446744073709551615UL,18446744073709551615UL},{1UL,18446744073709551615UL},{18446744073709551615UL,1UL}};
    int32_t l_41 = 1L;
    int8_t l_79 = 0L;
    int32_t l_80 = 8L;
    int32_t l_95 = 0x81FA067EL;
    int32_t l_96[4][1];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_96[i][j] = 0x596A4226L;
    }
    for (p_10 = 0; (p_10 <= 1); p_10 += 1)
    { 
        l_41 = 0xAD970979L;
        for (p_11 = 0; (p_11 <= 1); p_11 += 1)
        { 
            uint32_t l_42 = 4294967295UL;
            l_42 = p_10;
        }
    }
    for (p_11 = 0; (p_11 != 1); p_11++)
    { 
        uint16_t l_66 = 65530UL;
        int32_t l_67 = (-2L);
        int32_t l_68[1][3];
        uint32_t l_97 = 4294967295UL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_68[i][j] = 0x11C0E03AL;
        }
        for (g_25 = 0; (g_25 <= 1); g_25 += 1)
        { 
            int32_t l_45 = (-1L);
            int32_t l_46 = 0L;
            g_49--;
            for (p_8 = 1; (p_8 >= 0); p_8 -= 1)
            { 
                int32_t l_59 = 4L;
                int i, j;
                l_59 |= (((((safe_add_func_uint8_t_u_u(l_40[(p_8 + 2)][g_25], (g_58 &= (((-2L) ^ (safe_div_func_int16_t_s_s((((((safe_rshift_func_int16_t_s_u(((l_46 = 0xEEL) , 1L), 10)) & 0L) , p_10) >= g_49) > l_45), g_4))) & p_11)))) , g_49) | l_41) != g_25) ^ g_25);
                l_67 = (safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((l_66 = (p_11 ^ 0xD6L)), (((g_47 , g_4) ^ l_40[(p_8 + 2)][g_25]) , g_25))), p_10)), p_8));
            }
            ++g_69;
            for (p_9 = 0; (p_9 <= 1); p_9 += 1)
            { 
                return p_8;
            }
        }
        for (g_47 = 0; (g_47 >= 11); g_47++)
        { 
            int64_t l_74 = 0xCBED49F2EA6DA23ALL;
            uint32_t l_83[4][3] = {{18446744073709551615UL,1UL,18446744073709551615UL},{0xE3776823L,0xAF6298A0L,18446744073709551615UL},{0xE3776823L,0xE3776823L,0xAF6298A0L},{18446744073709551615UL,0xAF6298A0L,0xAF6298A0L}};
            int i, j;
            l_74 = p_9;
            if ((l_80 ^= (safe_div_func_int64_t_s_s(((((((0x8FL == (safe_sub_func_int64_t_s_s(0L, ((l_79 = g_48) >= l_74)))) , p_8) < l_74) != l_41) && 0xDDC7CBFAL) && 0x1AL), p_9))))
            { 
                g_81[2][0] = g_25;
            }
            else
            { 
                int64_t l_90 = (-8L);
                g_81[3][0] = (safe_unary_minus_func_int32_t_s(l_41));
                l_90 = (l_83[0][1] == (safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(1UL, (safe_add_func_int8_t_s_s(g_3, p_10)))), 5)));
                return g_3;
            }
            for (g_25 = 0; (g_25 < 9); ++g_25)
            { 
                g_81[2][0] |= ((l_66 == 0xC26EAA6BC85F6474LL) | ((l_79 , p_10) == 0L));
                return g_49;
            }
        }
        ++l_97;
    }
    return p_11;
}



static int8_t  func_13(uint32_t  p_14, const uint16_t  p_15)
{ 
    int8_t l_20[1];
    int32_t l_31 = (-1L);
    int32_t l_32 = 0x4AD1532DL;
    int i;
    for (i = 0; i < 1; i++)
        l_20[i] = 0L;
    if ((safe_div_func_int8_t_s_s(g_3, ((0xD664L | 65528UL) & p_14))))
    { 
        int64_t l_19[2];
        int i;
        for (i = 0; i < 2; i++)
            l_19[i] = 5L;
        l_20[0] = l_19[0];
        g_25 ^= (safe_div_func_int64_t_s_s((p_15 , p_15), (safe_rshift_func_int16_t_s_s((p_14 ^ p_14), 13))));
        l_32 |= (safe_add_func_uint64_t_u_u(g_3, ((((l_31 = (safe_lshift_func_uint8_t_u_u((((+4294967287UL) , l_19[0]) != p_14), 5))) || l_19[0]) , 0xD9FABAF1L) , g_3)));
    }
    else
    { 
        uint8_t l_37 = 2UL;
        l_32 = ((safe_add_func_uint8_t_u_u((g_3 && (g_3 < ((safe_div_func_int16_t_s_s(l_37, p_15)) < p_14))), 9L)) && l_20[0]);
    }
    for (p_14 = 0; (p_14 > 58); ++p_14)
    { 
        return l_20[0];
    }
    return g_25;
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
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_81[i][j], "g_81[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
