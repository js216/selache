// SPDX-License-Identifier: MIT
// cctest_csmith_7f42c07b.c --- cctest case csmith_7f42c07b (csmith seed 2135081083)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x73f80e51 */

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

// Options:   -s 2135081083 -o /tmp/csmith_gen_4lpfge6e/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int8_t g_5 = 0xD8L;
static uint32_t g_6 = 1UL;
static uint16_t g_19 = 0xA700L;
static int8_t g_32[2][2] = {{0x18L,0x18L},{0x18L,0x18L}};
static uint32_t g_60 = 18446744073709551615UL;
static int8_t g_62 = 8L;
static int32_t g_65[3][1] = {{(-2L)},{(-2L)},{(-2L)}};
static int32_t g_91[3][2] = {{0L,0L},{0L,0L},{0L,0L}};
static int64_t g_146 = 0x9A73949AADFC78E8LL;
static int16_t g_177 = 0xEB4EL;



static uint8_t  func_1(void);
static int32_t  func_10(int32_t  p_11, uint64_t  p_12);
static int64_t  func_46(uint32_t  p_47);




static uint8_t  func_1(void)
{ 
    int64_t l_2 = 0xA4A9BDBA76AABECBLL;
    int32_t l_3 = (-3L);
    int32_t l_4 = 0x8ADAE8C9L;
    uint64_t l_9[4] = {0xE4B7834D8A94B2ABLL,0xE4B7834D8A94B2ABLL,0xE4B7834D8A94B2ABLL,0xE4B7834D8A94B2ABLL};
    int16_t l_163 = 0xECA4L;
    int i;
    --g_6;
    for (g_6 = 0; (g_6 <= 3); g_6 += 1)
    { 
        uint64_t l_13 = 2UL;
        int32_t l_176 = 0xD6A2F1C6L;
        int i;
        g_146 &= func_10(l_9[g_6], l_13);
        for (g_62 = 3; (g_62 >= 0); g_62 -= 1)
        { 
            uint32_t l_162 = 1UL;
            g_65[1][0] = (g_19 >= (g_65[0][0] , g_91[1][0]));
            if ((g_65[1][0] = (safe_lshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((g_5 , (+((safe_div_func_uint8_t_u_u(((((((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(g_5, (((((l_162 = (g_60 , g_19)) > g_19) , l_162) <= l_9[1]) , l_2))), g_5)), 1)), l_3)) ^ g_60) | l_3) < 255UL) , l_162) | g_32[0][0]), 1UL)) != l_163))) ^ 4UL), g_91[2][0])), 7))))
            { 
                const uint32_t l_168 = 0x2308598BL;
                g_177 ^= (safe_mul_func_uint8_t_u_u((((((l_176 = (((l_168 <= (safe_rshift_func_uint8_t_u_s(l_163, 1))) | (((safe_add_func_uint64_t_u_u((!(safe_lshift_func_uint16_t_u_s(((0x8EL <= l_13) | 1UL), 11))), 5L)) || g_65[1][0]) == l_9[g_6])) != 3UL)) > l_168) && 1UL) >= g_91[1][1]) , l_168), 1L));
            }
            else
            { 
                uint32_t l_187 = 0UL;
                if (g_65[1][0])
                    break;
                g_65[0][0] = (((((!(safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(g_91[0][0], 1)), g_146)), ((safe_mul_func_uint8_t_u_u(l_162, l_187)) || l_9[3])))) | 0x7DD5L) <= g_32[0][0]) > 0x37441625C23C1BAFLL) , 0x7F9B73E1L);
            }
        }
    }
    return g_62;
}



static int32_t  func_10(int32_t  p_11, uint64_t  p_12)
{ 
    uint64_t l_27 = 6UL;
    uint16_t l_66 = 65526UL;
    int16_t l_67[1][2];
    int32_t l_80 = 6L;
    uint16_t l_97 = 0UL;
    int32_t l_101 = 0xCEC1DFBCL;
    const uint8_t l_127[2] = {0x53L,0x53L};
    int32_t l_141 = 0L;
    int16_t l_145[3];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_67[i][j] = 0xAE63L;
    }
    for (i = 0; i < 3; i++)
        l_145[i] = 0x6419L;
    for (g_5 = 8; (g_5 == 0); --g_5)
    { 
        uint8_t l_29 = 0xA1L;
        for (p_12 = (-16); (p_12 >= 48); ++p_12)
        { 
            int8_t l_18[4];
            int32_t l_28 = 0xD29ED7D4L;
            int i;
            for (i = 0; i < 4; i++)
                l_18[i] = 0L;
            for (p_11 = 3; (p_11 >= 0); p_11 -= 1)
            { 
                int i;
                g_19 ^= l_18[p_11];
            }
            for (p_11 = (-19); (p_11 >= 3); p_11 = safe_add_func_uint16_t_u_u(p_11, 9))
            { 
                int64_t l_26[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_26[i] = 1L;
                l_29 ^= (((safe_sub_func_int64_t_s_s(((safe_add_func_int8_t_s_s(((p_11 | ((l_28 |= (((g_5 <= l_26[2]) >= g_5) | l_27)) || g_6)) & 1L), l_27)) , g_5), 8UL)) ^ 0xE1CC0E42L) > l_18[3]);
                if (p_11)
                    continue;
                return l_26[2];
            }
        }
        for (p_11 = (-27); (p_11 != (-17)); p_11++)
        { 
            uint32_t l_33 = 0UL;
            int32_t l_37 = 0L;
            for (g_19 = 0; (g_19 <= 1); g_19 += 1)
            { 
                int32_t l_36 = 0x029EFEC1L;
                int i, j;
                --l_33;
                l_36 = (g_32[g_19][g_19] > l_29);
                l_37 |= 0xDBE4FCD5L;
            }
            g_65[1][0] = ((((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_int64_t_s_s(func_46(l_27), l_66)), l_67[0][0])), 7)), g_32[1][1])) ^ p_11) || p_11) & p_11);
        }
    }
    if ((safe_lshift_func_uint16_t_u_u((l_80 = ((((safe_mul_func_int8_t_s_s((g_62 , (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(248UL, (safe_mod_func_int32_t_s_s(l_66, l_27)))), g_60)), l_27))), p_11)) != g_6) || p_12) & p_11)), 14)))
    { 
        return p_12;
    }
    else
    { 
        const int16_t l_89 = 6L;
        int32_t l_103 = 0xA5A8626FL;
        int32_t l_104 = (-6L);
        int16_t l_138 = (-3L);
        uint8_t l_142 = 7UL;
        for (l_80 = (-10); (l_80 >= 21); l_80 = safe_add_func_uint64_t_u_u(l_80, 9))
        { 
            int8_t l_98 = 0x56L;
            int32_t l_99 = 0x09311A09L;
            int32_t l_100 = 3L;
            int32_t l_102 = 3L;
            int32_t l_105[3][4];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_105[i][j] = (-8L);
            }
            if (((safe_mul_func_int16_t_s_s(l_80, (safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_89 && (~(((g_91[2][0] |= g_32[0][1]) >= p_12) ^ g_5))), 1UL)), 0x8D29L)))) <= p_12))
            { 
                l_98 ^= ((((((!((((l_89 && l_89) && ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(l_97, 0xA3631A0D171E9D64LL)), 6L)) == g_60)) , 0x48L) >= l_27)) >= 0L) , 0xC794L) >= (-1L)) , 0xF3L) >= 0x85L);
            }
            else
            { 
                uint8_t l_106 = 0x45L;
                --l_106;
                if (g_32[0][0])
                    break;
            }
        }
        for (p_12 = (-5); (p_12 <= 48); ++p_12)
        { 
            uint64_t l_122 = 0x78B148893BA86ABALL;
            if ((((safe_mod_func_uint16_t_u_u((18446744073709551613UL & ((l_27 ^ g_60) || p_11)), 0x849DL)) || 0x1DCCC5F5551AFAABLL) < l_103))
            { 
                g_65[1][0] = (((safe_mul_func_uint16_t_u_u(p_12, p_11)) ^ ((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_11, 15)), g_19)), 3)) ^ p_11)) != 0x3F55L);
                g_65[1][0] = 0x91D89D75L;
            }
            else
            { 
                uint32_t l_128 = 0x9E6B2CF0L;
                g_65[1][0] = (((+(l_128 = (((l_122 , (((((((safe_div_func_int64_t_s_s(0x80A8C217868D4C3CLL, (safe_mod_func_int16_t_s_s((g_62 , g_6), 0x70CDL)))) <= (-1L)) & 4294967295UL) >= l_67[0][1]) , 18446744073709551608UL) > p_12) || l_127[1])) | g_62) , p_11))) , p_11) <= g_19);
            }
        }
        l_103 = (l_104 |= (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s((l_142 = (safe_lshift_func_uint16_t_u_u((~((l_138 || g_60) <= ((((safe_mod_func_uint16_t_u_u(((-2L) == p_11), l_141)) > p_11) <= 0L) ^ g_19))), 15))), p_11)), 0xF0L)), l_138)));
    }
    for (g_19 = 1; (g_19 != 1); g_19 = safe_add_func_uint32_t_u_u(g_19, 9))
    { 
        return p_11;
    }
    return l_145[0];
}



static int64_t  func_46(uint32_t  p_47)
{ 
    uint64_t l_61 = 1UL;
    int32_t l_63 = 0xB9FE2185L;
    for (g_19 = 0; (g_19 >= 57); ++g_19)
    { 
        uint32_t l_55 = 0x827BE627L;
        int8_t l_64 = 0x58L;
        g_65[1][0] = ((g_32[0][1] , ((l_63 = ((((((+(g_62 = (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(l_55, (((safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s((g_60 = g_19), 0x8C0F86F4C35C241ELL)), l_61)) | g_5) > g_5))), p_47)))) , g_5) >= g_6) < 0x714ABA13L) || 6UL) && g_19)) , p_47)) || l_64);
    }
    return g_62;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_32[i][j], "g_32[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_65[i][j], "g_65[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_91[i][j], "g_91[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
