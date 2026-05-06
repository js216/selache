// SPDX-License-Identifier: MIT
// cctest_csmith_3978defc.c --- cctest case csmith_3978defc (csmith seed 964222716)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x61ca95b8 */

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

// Options:   -s 964222716 -o /tmp/csmith_gen_7n5rut48/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static const int32_t g_8[1] = {(-1L)};
static int64_t g_27 = (-1L);
static int64_t g_30 = 1L;
static int16_t g_68 = 1L;
static int64_t g_92 = (-3L);
static int32_t g_94 = 0xDA5D7A23L;
static uint32_t g_95 = 0x24F91E2CL;
static int16_t g_104 = 0x9616L;
static uint32_t g_116 = 5UL;
static int16_t g_141 = (-9L);
static int32_t g_145 = 4L;
static uint32_t g_146 = 0UL;
static int32_t g_160 = 1L;
static uint32_t g_315 = 0x336FF1FBL;
static uint16_t g_331 = 65535UL;
static int64_t g_356 = 1L;
static int16_t g_357 = 0L;
static int16_t g_358 = 0x40B6L;
static int32_t g_360 = 0x43DD389AL;
static uint64_t g_363[1] = {0x9217CC902690AB5DLL};
static uint32_t g_404[3][1] = {{0UL},{0UL},{0UL}};
static int64_t g_428 = 0xED42EEBEE6FAA462LL;
static int32_t g_430 = 0L;



static const uint64_t  func_1(void);
static uint8_t  func_2(uint64_t  p_3, int8_t  p_4, int64_t  p_5);
static int32_t  func_6(const int32_t  p_7);
static int32_t  func_31(int16_t  p_32);




static const uint64_t  func_1(void)
{ 
    int64_t l_223 = 8L;
    int32_t l_224 = 0xEEB66546L;
    uint32_t l_229 = 1UL;
    int32_t l_230 = 0x8C7ECC31L;
    int32_t l_231 = 0xF2DFD280L;
    int8_t l_334 = 6L;
    int64_t l_345 = 0xD223423A12515FCFLL;
    uint32_t l_382 = 0x73719AC9L;
    int16_t l_384 = 0x5D77L;
    uint64_t l_385 = 0xF0C6E62EBD1B2AB0LL;
    uint8_t l_394 = 0x49L;
lbl_408:
    l_334 = (func_2(((l_224 = (l_223 = func_6(g_8[0]))) || 0L), (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(l_229, l_229)) == (-6L)), l_230)), l_231) == g_8[0]);
    if (g_116)
    { 
        int16_t l_346 = 0x4C5EL;
        int32_t l_347 = 1L;
        int32_t l_359 = 0x931DE071L;
        uint8_t l_383 = 0xDFL;
        if ((0x9C5FL | 65535UL))
        { 
            l_347 &= (+(((safe_div_func_uint8_t_u_u(l_224, (((g_116 ^= 0x34D63906L) , ((safe_add_func_int64_t_s_s(((+(++g_331)) ^ (safe_add_func_uint64_t_u_u(l_345, (l_346 | l_345)))), l_346)) & g_92)) , g_94))) ^ l_346) <= 255UL));
            l_231 = (0xDDL | 0xE9L);
        }
        else
        { 
            int32_t l_349[5] = {0x124F8614L,0x124F8614L,0x124F8614L,0x124F8614L,0x124F8614L};
            int32_t l_362 = 7L;
            int i;
            l_349[3] = (!0x3995447FL);
            for (g_146 = 2; (g_146 <= 60); g_146 = safe_add_func_uint16_t_u_u(g_146, 3))
            { 
                uint8_t l_354 = 0x1DL;
                uint32_t l_355 = 0xE46CAC96L;
                if (g_30)
                    break;
                l_224 = (((g_27 < (l_223 | (safe_add_func_uint64_t_u_u(((g_30 = l_354) || g_94), l_347)))) & l_355) > l_354);
                if (l_230)
                    break;
            }
            for (g_94 = 0; (g_94 <= 4); g_94 += 1)
            { 
                int32_t l_361[4][1];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_361[i][j] = (-7L);
                }
                g_363[0]++;
            }
        }
        if (g_315)
            goto lbl_370;
lbl_370:
        for (g_358 = 0; (g_358 > (-16)); g_358 = safe_sub_func_uint64_t_u_u(g_358, 3))
        { 
            for (g_141 = 0; (g_141 >= 18); g_141++)
            { 
                if (g_363[0])
                    break;
            }
        }
        l_359 = (l_359 >= (((safe_rshift_func_uint16_t_u_u(1UL, (((((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(((((((((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s((~255UL), ((0UL && 0x16L) >= l_347))), l_346)) <= l_382) == l_347) != l_383) , l_384) | l_345) >= g_363[0]) | l_359), g_363[0])), 0UL)) ^ l_223) > l_383) > l_385) > 0L))) < g_68) != 0x022EA64F363A3BE4LL));
    }
    else
    { 
        uint64_t l_392[2];
        int16_t l_395 = (-1L);
        int32_t l_402 = 1L;
        int i;
        for (i = 0; i < 2; i++)
            l_392[i] = 0x94D726B39FBA44A9LL;
        for (l_231 = (-16); (l_231 == 28); l_231 = safe_add_func_int32_t_s_s(l_231, 1))
        { 
            uint32_t l_393 = 18446744073709551612UL;
            int32_t l_401 = 0x89D8AF96L;
            g_360 ^= (safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((l_392[0] | (((((((((5L ^ l_392[0]) ^ ((0xEE99465673B96447LL != l_393) || g_363[0])) < l_394) ^ l_392[0]) && l_392[0]) , (-5L)) >= 0xDF44L) | l_395) , g_8[0])) != l_334), 0xA305A860L)), 0x2A489C87993F51D0LL));
            l_230 = ((safe_mod_func_int16_t_s_s((!(((safe_mod_func_int32_t_s_s(g_27, g_145)) > ((g_94 , (((l_401 ^= 1UL) | 0x8CA2FDA58E67CEB9LL) && l_393)) ^ g_141)) , 0x45E3L)), 0x647BL)) ^ g_363[0]);
        }
        l_402 |= g_357;
    }
    for (l_384 = 0; (l_384 <= 0); l_384 += 1)
    { 
        int8_t l_403[4][3] = {{(-9L),(-9L),(-1L)},{(-9L),(-9L),(-1L)},{(-9L),(-9L),(-1L)},{(-9L),(-9L),(-1L)}};
        int8_t l_429 = 0x2EL;
        int32_t l_431 = 1L;
        int i, j;
        g_404[1][0]++;
        l_230 = g_363[l_384];
        if ((!0x35L))
        { 
            if (g_94)
                goto lbl_408;
            l_230 = (safe_div_func_uint32_t_u_u((((safe_mod_func_int32_t_s_s(((4294967295UL < ((safe_add_func_uint16_t_u_u((+g_8[0]), ((l_224 = (255UL != (safe_sub_func_int16_t_s_s(((g_27 >= g_95) , g_360), l_394)))) == 0x5D99L))) == 0x7ABA4B16L)) == g_116), g_363[l_384])) >= l_403[2][2]) > 2UL), g_104));
        }
        else
        { 
            int64_t l_425 = (-1L);
            int i;
            g_360 = (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((((+0xC4E4L) & (((safe_rshift_func_uint16_t_u_u(((((l_224 = (0UL ^ ((l_403[0][2] , l_403[2][0]) , (-5L)))) == g_363[0]) != g_360) != g_160), 15)) ^ g_404[1][0]) , g_27)) && 0xBA196C32E4B271C1LL) || g_141), g_141)) < 0UL), l_345));
            g_360 = ((l_431 &= ((l_231 = (((g_430 = ((((((l_223 ^ l_425) || ((safe_div_func_uint64_t_u_u((((((l_403[2][2] == ((g_363[l_384] = ((0L && g_116) >= g_357)) > g_315)) != 0x17551B62L) > 1L) <= g_428) < 5UL), l_403[0][1])) > 1L)) , 0x7C134BDB9BEDD66ALL) >= (-1L)) < g_94) <= l_429)) >= g_357) || 4294967291UL)) ^ 0xEDA587845E46161DLL)) || 0x0AL);
            if (l_431)
                continue;
        }
    }
    return l_385;
}



static uint8_t  func_2(uint64_t  p_3, int8_t  p_4, int64_t  p_5)
{ 
    uint16_t l_251 = 0x2786L;
    int32_t l_264[3][4][4] = {{{(-1L),(-1L),1L,0xFACF2A4EL},{(-1L),(-1L),0xFACF2A4EL,0xFACF2A4EL},{(-1L),(-1L),1L,0xFACF2A4EL},{(-1L),(-1L),0xFACF2A4EL,0xFACF2A4EL}},{{(-1L),(-1L),1L,0xFACF2A4EL},{(-1L),(-1L),0xFACF2A4EL,0xFACF2A4EL},{(-1L),(-1L),1L,0xFACF2A4EL},{(-1L),(-1L),0xFACF2A4EL,0xFACF2A4EL}},{{(-1L),(-1L),1L,0xFACF2A4EL},{(-1L),(-1L),0xFACF2A4EL,0xFACF2A4EL},{(-1L),(-1L),1L,0xFACF2A4EL},{(-1L),(-1L),0xFACF2A4EL,0xFACF2A4EL}}};
    int i, j, k;
    for (g_68 = 25; (g_68 >= 1); g_68 = safe_sub_func_int64_t_s_s(g_68, 7))
    { 
        int32_t l_242 = 0xD5BA149CL;
        int32_t l_255 = 0x90BE2FE8L;
        int32_t l_286 = (-3L);
        int32_t l_329[5][1];
        int32_t l_330[2][5][3] = {{{0xFC7D4BD7L,(-10L),1L},{0x1866361AL,0x1866361AL,1L},{(-10L),0xFC7D4BD7L,1L},{0xFC7D4BD7L,(-10L),1L},{0x1866361AL,0x1866361AL,1L}},{{(-10L),0xFC7D4BD7L,1L},{0xFC7D4BD7L,(-10L),1L},{0x1866361AL,0x1866361AL,1L},{(-10L),0xFC7D4BD7L,1L},{0xFC7D4BD7L,(-10L),1L}}};
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_329[i][j] = 0L;
        }
        if ((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((((safe_sub_func_uint32_t_u_u((((g_116 <= (l_242 || (safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((8UL != ((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s(((l_251 != 0x7D6C01FFE2473969LL) & l_242), g_146)), 0UL)) , g_94)) && p_4), 7UL)), l_251)))) , 0UL) | p_5), 4294967295UL)) && 0xCA1C3D12EEB9F0DALL) >= l_251) , p_3), 5)), l_251)), 0x09L)))
        { 
            uint32_t l_288 = 0x237C0BC5L;
            int32_t l_289 = 0x86672239L;
            g_145 = (l_255 = (~((p_5 , (g_94 >= p_3)) >= ((safe_add_func_uint32_t_u_u(l_251, l_251)) > l_242))));
            for (g_94 = 0; (g_94 <= 0); g_94 = safe_add_func_uint16_t_u_u(g_94, 1))
            { 
                uint32_t l_267 = 6UL;
                int32_t l_268 = 0xF6797925L;
                g_145 = (l_264[1][1][3] = (safe_div_func_int16_t_s_s((g_141 = 1L), ((safe_mul_func_uint16_t_u_u(0x1D6EL, p_3)) && (((safe_rshift_func_uint16_t_u_s((5UL ^ (-8L)), p_3)) && g_68) , g_8[0])))));
                g_145 = 0xF9D0CA95L;
                l_268 = (safe_lshift_func_int8_t_s_u(((((1UL <= 0xD6E3933DL) > l_242) == l_267) != 249UL), 1));
            }
            for (g_116 = 8; (g_116 < 1); g_116 = safe_sub_func_uint64_t_u_u(g_116, 4))
            { 
                int16_t l_287 = (-1L);
                g_94 ^= ((safe_div_func_uint32_t_u_u(((l_255 &= (safe_sub_func_int32_t_s_s((p_4 >= ((g_92 &= (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(9L, 0x25C6L)), ((((0L | g_95) , g_95) > l_242) ^ 0x7A930F33L))), 12))) ^ p_5)), g_8[0]))) , g_92), 0x9D617F3BL)) ^ p_4);
                l_289 &= ((g_116 , ((g_68 >= (l_286 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((!(l_255 = (0L | l_264[1][3][0]))), p_5)), (-5L))))) < l_287)) || l_288);
                return l_289;
            }
        }
        else
        { 
            int64_t l_295 = 0xFEE84A3AFCE4FDF0LL;
            int32_t l_310 = (-1L);
            int32_t l_313 = 0xC6CF8349L;
            if ((p_3 == (+(1L | ((((safe_rshift_func_uint16_t_u_s(l_295, 5)) || (g_104 >= p_5)) != 5L) , 249UL)))))
            { 
                int16_t l_309 = 0x5526L;
                int32_t l_311[3];
                int32_t l_312 = 4L;
                int i;
                for (i = 0; i < 3; i++)
                    l_311[i] = 0x21BE7830L;
                l_313 = ((l_312 = (l_311[2] = (((safe_mod_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((+((safe_rshift_func_int8_t_s_s(((((((safe_div_func_uint16_t_u_u(65530UL, (safe_sub_func_int32_t_s_s((g_145 >= (safe_rshift_func_int16_t_s_s((((((g_116 = (p_3 <= (((((0x0684B4F7L ^ 0x103EE402L) || 1L) || 0x719298037F3D1E7DLL) != g_116) < 0xBB20L))) ^ l_309) | 0x6A00AF914532080CLL) | (-5L)) , 0x6FA9L), g_8[0]))), g_27)))) | l_286) | l_251) , l_264[1][1][3]) & l_310) && g_160), 7)) ^ p_4)), g_27)), l_310)) && l_309) < p_3))) < l_242);
            }
            else
            { 
                int32_t l_314 = 0xE48C6A7EL;
                if (l_251)
                    break;
                g_145 = ((p_4 = g_30) , (l_314 &= 0x27CE31F7L));
                --g_315;
            }
            if (l_313)
                continue;
            l_330[0][1][2] ^= (((safe_mul_func_uint8_t_u_u(p_5, (safe_lshift_func_int16_t_s_u((l_329[0][0] |= ((safe_div_func_int64_t_s_s(9L, (g_27 ^= l_286))) | ((safe_rshift_func_uint16_t_u_u(((((l_255 = (safe_rshift_func_int8_t_s_s((~g_94), 7))) != l_286) | p_3) & l_264[0][2][1]), l_264[1][1][3])) && 0xEC3DBD0510458D82LL))), g_68)))) == g_141) < g_146);
        }
    }
    ++g_331;
    return g_8[0];
}



static int32_t  func_6(const int32_t  p_7)
{ 
    int32_t l_13[5];
    int32_t l_14[1];
    int32_t l_15[5] = {0L,0L,0L,0L,0L};
    int32_t l_16 = (-1L);
    int32_t l_185 = 0x09B2EA33L;
    int8_t l_218[2];
    uint32_t l_219 = 6UL;
    uint32_t l_220 = 0xBC148092L;
    int32_t l_221[2];
    uint32_t l_222 = 0UL;
    int i;
    for (i = 0; i < 5; i++)
        l_13[i] = 0x038591B6L;
    for (i = 0; i < 1; i++)
        l_14[i] = 0xA7EF5D87L;
    for (i = 0; i < 2; i++)
        l_218[i] = 0L;
    for (i = 0; i < 2; i++)
        l_221[i] = (-1L);
    l_16 &= (safe_add_func_int64_t_s_s(0L, (safe_mul_func_uint16_t_u_u((l_15[4] |= (((l_13[2] ^= g_8[0]) != g_8[0]) ^ l_14[0])), p_7))));
    for (l_16 = 0; (l_16 <= 22); ++l_16)
    { 
        int8_t l_37 = (-1L);
        int32_t l_172 = 0xDCC4AB30L;
        if ((((((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u(p_7, p_7)) , p_7), (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((g_27 ^= ((((p_7 >= g_8[0]) == g_8[0]) , p_7) != g_8[0])), g_8[0])), 15)))) == p_7) , p_7) && l_15[4]) , g_8[0]))
        { 
            for (g_27 = 26; (g_27 < 26); g_27 = safe_add_func_uint8_t_u_u(g_27, 1))
            { 
                g_30 = (-10L);
            }
        }
        else
        { 
            int32_t l_171[3];
            int i;
            for (i = 0; i < 3; i++)
                l_171[i] = 0x0DFAB60AL;
            if (func_31((((0x7EA1L && (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((-6L), g_8[0])), ((g_8[0] , 1UL) , l_37)))) && p_7) > g_27)))
            { 
                int16_t l_161 = 0x5516L;
                int32_t l_173 = 0xB15AC177L;
                l_15[3] ^= ((0x84A4L >= (p_7 && ((safe_rshift_func_uint8_t_u_u(5UL, ((safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s((safe_mul_func_int8_t_s_s((l_13[2] &= (g_160 = (18446744073709551615UL <= g_146))), 4UL)), 8L)), 7UL)) && l_161))) , (-9L)))) <= 1L);
                if (p_7)
                    break;
                l_173 = (l_37 , (l_172 |= (safe_mod_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u((~(((safe_mod_func_int64_t_s_s((safe_div_func_int64_t_s_s(g_104, (l_171[2] = g_92))), l_37)) < p_7) >= l_15[2])), g_8[0])) && p_7), g_145))));
            }
            else
            { 
                int32_t l_176 = 0x25790E88L;
                l_172 = (((safe_div_func_uint64_t_u_u(((l_176 = 0x2EBD030DL) | 0xBFF73A4BL), (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(l_15[4], ((g_141 | l_185) && g_160))), l_171[2])) > 1L) , p_7), 0xCAD6L)), 3)))) <= l_171[2]) , p_7);
                l_176 = (4294967295UL <= (g_94 = l_176));
                g_145 = ((l_176 >= (safe_div_func_int64_t_s_s(g_95, (safe_mod_func_uint16_t_u_u((~l_37), (((0x0DL <= 0UL) != 0x88L) | g_160)))))) , g_30);
            }
        }
        for (g_160 = 0; (g_160 <= 4); g_160 += 1)
        { 
            uint64_t l_191 = 18446744073709551615UL;
            int32_t l_194 = (-1L);
            l_191++;
            l_194 |= 0x33E800ADL;
        }
    }
    l_222 ^= ((l_221[1] &= (((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((l_13[2] = (safe_div_func_int8_t_s_s((l_14[0] = (safe_add_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((((!(l_15[4] = (safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((+(!g_160)), (safe_lshift_func_int16_t_s_s(g_145, 14)))), ((p_7 & ((((l_218[0] = (safe_sub_func_uint16_t_u_u(((-1L) || g_94), p_7))) != p_7) && 1L) , g_145)) , l_16))))) <= g_145) , l_219) > 0xDA62L), 0x23L)), l_219)) >= l_14[0]), l_220))), l_219))), l_185)) < g_141), p_7)) || 0L) ^ l_16)) , g_141);
    return p_7;
}



static int32_t  func_31(int16_t  p_32)
{ 
    uint32_t l_56 = 1UL;
    int32_t l_69 = 1L;
    const uint32_t l_86 = 18446744073709551606UL;
    int32_t l_136 = 0x69343887L;
    int32_t l_137 = 0x1F98D321L;
    int32_t l_138 = 0L;
    int32_t l_139 = 0L;
    int32_t l_140 = 0xAE57A5C4L;
    int32_t l_142 = 0x89B0255DL;
    int32_t l_143 = 1L;
    int32_t l_144[3];
    int i;
    for (i = 0; i < 3; i++)
        l_144[i] = 0x2C01BB24L;
    for (p_32 = 0; (p_32 != 6); p_32 = safe_add_func_int16_t_s_s(p_32, 3))
    { 
        int32_t l_53 = 1L;
        int32_t l_57 = 0L;
        int32_t l_93 = 1L;
        uint64_t l_121[2];
        int i;
        for (i = 0; i < 2; i++)
            l_121[i] = 18446744073709551608UL;
        for (g_27 = (-27); (g_27 != (-17)); g_27 = safe_add_func_int32_t_s_s(g_27, 5))
        { 
            const int32_t l_85 = 0xEEC0DB1BL;
            int32_t l_87 = 0L;
            if ((safe_mul_func_int16_t_s_s(g_8[0], ((safe_add_func_int32_t_s_s((safe_div_func_int16_t_s_s((~(safe_sub_func_int64_t_s_s((safe_div_func_int32_t_s_s(l_53, (safe_mul_func_uint16_t_u_u(p_32, (p_32 > g_30))))), g_8[0]))), p_32)), p_32)) >= l_56))))
            { 
                l_57 &= l_53;
                l_69 = ((safe_lshift_func_uint8_t_u_s(((g_30 &= (safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((0UL & p_32) && (g_68 = ((safe_mul_func_int16_t_s_s((l_53 == g_27), g_27)) > 0xD97F668CDE333B8FLL))), 0)), 6L))) >= p_32), g_8[0])) , p_32);
            }
            else
            { 
                uint32_t l_84 = 0x9934B93DL;
                l_87 ^= (safe_lshift_func_int16_t_s_s((p_32 != (safe_sub_func_int32_t_s_s(((safe_mod_func_int64_t_s_s((l_57 |= (((g_8[0] && (((safe_mul_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s(g_8[0], (l_56 || l_84))), l_85)), l_85)) >= l_84) == l_85), l_69)) & 0x18L) != l_53)) || 0x2DBC40293E9FC65FLL) == g_30)), g_8[0])) ^ g_8[0]), l_86))), g_68));
            }
        }
        if (((safe_add_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u((++g_95), (g_104 = ((safe_add_func_int64_t_s_s((p_32 >= (safe_mod_func_uint64_t_u_u(g_94, (safe_sub_func_uint8_t_u_u(0xCCL, p_32))))), (-5L))) , 0L)))) , l_56), g_8[0])) , g_104))
        { 
            uint32_t l_113 = 4294967287UL;
            int32_t l_114[4][5] = {{0L,0L,0L,0L,0L},{(-6L),(-6L),(-6L),(-6L),(-6L)},{0L,0L,0L,0L,0L},{(-6L),(-6L),(-6L),(-6L),(-6L)}};
            int32_t l_115[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_115[i] = 0x2131A75DL;
            l_115[0] ^= (safe_add_func_uint8_t_u_u(l_57, (safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u((l_53 > p_32), (safe_sub_func_int8_t_s_s((((l_114[2][4] ^= ((l_57 , g_68) <= l_113)) || l_56) | 5L), g_95)))) > p_32), l_57))));
            g_94 = ((-8L) & (++g_116));
            l_69 = g_8[0];
        }
        else
        { 
            const uint16_t l_134 = 0x9DB4L;
            for (g_104 = 21; (g_104 <= (-28)); g_104 = safe_sub_func_int32_t_s_s(g_104, 5))
            { 
                const uint32_t l_135 = 0UL;
                l_121[0] = g_116;
                if (l_121[1])
                    continue;
                l_93 = ((safe_div_func_int16_t_s_s((0x8E1F03B47FC81C9DLL | (safe_add_func_uint64_t_u_u(p_32, (g_92 = (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(((g_116 = (l_69 |= (safe_rshift_func_int8_t_s_s(l_134, 7)))) , l_135), g_95)) < g_68), p_32)), p_32)))))), l_135)) , (-1L));
            }
        }
    }
    ++g_146;
    g_145 ^= ((p_32 < g_8[0]) & (~(safe_sub_func_uint16_t_u_u((g_8[0] | 0x4081ECF37D808B43LL), l_138))));
    return g_95;
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
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);

    }
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_360, "g_360", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_363[i], "g_363[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_404[i][j], "g_404[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
