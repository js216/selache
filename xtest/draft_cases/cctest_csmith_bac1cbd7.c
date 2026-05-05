// SPDX-License-Identifier: MIT
// cctest_csmith_bac1cbd7.c --- cctest case csmith_bac1cbd7 (csmith seed 3133262807)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x849edc23 */

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

// Options:   -s 3133262807 -o /tmp/csmith_gen_jzvifrtd/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int64_t g_3 = 0xF1BF506E60B0CEAFLL;
static int32_t g_21 = 0x921B0AE2L;
static int32_t g_35[2] = {0xB874BDBAL,0xB874BDBAL};
static int32_t g_41 = 0L;
static int8_t g_42[1] = {1L};
static int32_t g_63 = 0xE8449123L;
static int32_t g_75 = 0xEDF4A203L;
static int16_t g_83[4] = {0xC627L,0xC627L,0xC627L,0xC627L};
static int8_t g_85[1][2] = {{9L,9L}};
static int32_t g_86 = (-4L);
static int8_t g_101[2] = {0L,0L};
static uint64_t g_136[3] = {7UL,7UL,7UL};
static uint16_t g_145 = 65531UL;
static int8_t g_161 = 1L;
static uint32_t g_162 = 0xD1FBCF3AL;
static int32_t g_179 = 0x18A764D5L;
static uint8_t g_201 = 0x83L;
static int32_t g_230 = 1L;
static uint32_t g_231 = 0x8A039946L;
static uint32_t g_263 = 0x2973494EL;
static uint32_t g_287[1] = {0xA27DFF7EL};
static uint64_t g_292 = 0xF05B0942148729FDLL;
static int8_t g_315 = 0L;
static uint32_t g_316 = 0x6691D693L;
static int32_t g_330 = 0x3CF29838L;



static int16_t  func_1(void);
static int32_t  func_7(int32_t  p_8);
static uint32_t  func_11(int64_t  p_12);




static int16_t  func_1(void)
{ 
    int16_t l_2[1][2];
    int32_t l_306 = 0x108C17A0L;
    uint32_t l_331 = 0xD9497177L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_2[i][j] = (-10L);
    }
    if ((1UL ^ l_2[0][1]))
    { 
        return g_3;
    }
    else
    { 
        int8_t l_6 = 0x7AL;
        int32_t l_329 = 0x52C3249EL;
        for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
        { 
            const int32_t l_297 = (-1L);
            int32_t l_298 = 0L;
            int32_t l_305 = 0L;
            uint32_t l_311 = 0xF3C724B4L;
            if ((safe_lshift_func_int16_t_s_s((l_6 ^ l_6), 12)))
            { 
                g_230 = func_7(g_3);
                l_298 = (((1L ^ (safe_lshift_func_int8_t_s_u((l_2[0][1] || l_297), 7))) || g_292) | 4294967289UL);
            }
            else
            { 
                if (l_2[0][1])
                    break;
                l_305 = ((g_75 == (((safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((l_298 &= g_35[1]), (safe_lshift_func_uint16_t_u_s((g_145 = (0xDDL < 0x97L)), 5)))), l_297)) || l_6) == g_21)) & g_136[1]);
                l_306 = l_6;
            }
            for (g_231 = 0; (g_231 <= 0); g_231 += 1)
            { 
                int8_t l_312 = (-5L);
                int i, j;
                l_305 ^= ((l_312 = (l_306 ^= ((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u(l_2[g_3][(g_3 + 1)], 1)) == (g_35[1] ^ 0x9BBBL)) | l_2[g_3][(g_3 + 1)]), l_311)) && (-5L)))) ^ l_2[g_3][(g_3 + 1)]);
                if (l_2[0][1])
                    break;
                l_298 = ((safe_lshift_func_int16_t_s_s(g_21, 14)) && (g_316 = g_315));
            }
        }
        if (g_179)
        { 
            int8_t l_321 = (-2L);
            int32_t l_322 = 0xCF8C0091L;
            g_75 &= ((((safe_div_func_int16_t_s_s((g_83[2] = ((safe_mod_func_int32_t_s_s((l_321 <= g_315), (l_322 = l_321))) && l_322)), 0x7374L)) || l_306) || 0x48885BD3CE0F37C1LL) | 0L);
        }
        else
        { 
            const int32_t l_328 = 8L;
            g_230 = ((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((g_231 = ((l_329 = (~(l_328 ^ g_3))) >= (((g_330 &= ((g_161 = (g_83[2] != g_201)) , g_85[0][1])) , g_42[0]) , 0x9819A109L))), g_230)) >= 0x80B4788FL), l_6)) ^ 0x84668B10661FE9FDLL);
            l_331 = (-2L);
        }
        return l_2[0][1];
    }
}



static int32_t  func_7(int32_t  p_8)
{ 
    uint32_t l_22 = 0x5B1510AFL;
    int32_t l_33 = 0xC1D686A3L;
    int8_t l_34 = 8L;
    uint32_t l_36[4][2] = {{0x5D3C095BL,0x5D3C095BL},{0x5D3C095BL,0x5D3C095BL},{0x5D3C095BL,0x5D3C095BL},{0x5D3C095BL,0x5D3C095BL}};
    int16_t l_52 = (-8L);
    int32_t l_84 = 0L;
    int32_t l_87 = 0L;
    uint16_t l_88 = 65530UL;
    uint64_t l_98 = 0x6CB56AE7BB48DF9FLL;
    int32_t l_218 = 0x7B0AB9F4L;
    int i, j;
lbl_100:
    l_22 ^= (safe_sub_func_uint32_t_u_u(func_11(p_8), (g_21 = (safe_mod_func_int16_t_s_s((~(safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(p_8, p_8)), (-1L)))), 65533UL)))));
lbl_165:
    if ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(((g_35[1] &= ((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((l_33 = l_22), l_34)), (g_21 >= 18446744073709551614UL))) , 0xA19820B2L)) || p_8), g_3)) , l_36[2][1]), p_8)) < 0L), p_8)))
    { 
        int16_t l_43[4];
        int32_t l_81 = 0x4EF461E6L;
        int32_t l_82[3][4] = {{0x9B07D9F9L,0x023C0783L,0x023C0783L,0x9B07D9F9L},{0x023C0783L,0x9B07D9F9L,0x023C0783L,0x023C0783L},{0x9B07D9F9L,0x9B07D9F9L,(-1L),0x9B07D9F9L}};
        int32_t l_95 = 0x89768AFAL;
        int i, j;
        for (i = 0; i < 4; i++)
            l_43[i] = 0x3E62L;
        for (g_21 = 0; (g_21 <= 1); g_21 += 1)
        { 
            uint32_t l_44 = 0UL;
            int32_t l_64[1];
            int32_t l_65 = 0x453288EEL;
            int64_t l_66 = 0x8CACF6402D6FA87DLL;
            int i;
            for (i = 0; i < 1; i++)
                l_64[i] = 1L;
            if ((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u((l_44--), 5)) , (((safe_mul_func_uint8_t_u_u(0UL, 0x63L)) , 0xAC2457718DA91E53LL) || 9UL)), 0)))
            { 
                l_52 = (((((p_8 < (safe_lshift_func_uint8_t_u_u(0x57L, 0))) == (+(l_33 = (g_42[0] & g_21)))) || g_41) , p_8) > p_8);
            }
            else
            { 
                uint64_t l_73 = 18446744073709551606UL;
                int32_t l_74[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_74[i] = 0xF688490AL;
                l_65 = (safe_sub_func_int8_t_s_s((l_64[0] |= (safe_sub_func_uint16_t_u_u((0x7B06F8616691CFE0LL <= ((safe_rshift_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((((g_63 = ((((g_42[0] = (safe_mod_func_int64_t_s_s((p_8 <= ((p_8 == 0UL) ^ l_34)), 0xDA6A1E05BF5EF7B6LL))) , g_35[1]) | g_35[1]) | 0xEEDF2191L)) | 0x215AL) , g_42[0]), 0xB5L)) < g_3) || g_21), 3)) , 0x3DF555A6F0ED5C0ELL)), l_52))), 0x80L));
                l_66 = ((((((l_22 || 0x31B10CD7L) != p_8) ^ l_65) | p_8) > p_8) != l_43[1]);
                g_75 &= (9L | (((((l_74[2] = (((safe_sub_func_uint16_t_u_u(p_8, ((((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(l_44, 9)) == p_8), 0)) & g_3) & g_35[1]) || 6L))) > p_8) == l_73)) < g_42[0]) , 1UL) || g_63) , g_42[0]));
            }
            return p_8;
        }
        g_75 = (l_95 = ((l_81 = (l_82[2][0] = ((+(safe_rshift_func_int16_t_s_u(((safe_mul_func_int16_t_s_s((((-2L) && ((--l_88) ^ 0L)) ^ (safe_sub_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(1UL, p_8)) ^ g_85[0][1]), p_8))), p_8)) ^ 0x42C7241AL), g_75))) <= l_82[2][2]))) | 1L));
        for (l_34 = (-8); (l_34 != (-28)); --l_34)
        { 
            uint16_t l_99 = 0xC623L;
            int32_t l_113 = 0x696E83D7L;
            if ((g_86 = (l_99 = l_98)))
            { 
                if (g_41)
                    goto lbl_100;
            }
            else
            { 
                int32_t l_102 = 0xD3DF35B7L;
                l_102 |= (g_86 = ((((g_101[0] &= (p_8 , g_35[1])) , p_8) , 18446744073709551611UL) <= g_3));
                l_113 = ((safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(0xDF8DAF57E05BCBD5LL, (safe_rshift_func_int16_t_s_s((!(((!((((safe_rshift_func_uint8_t_u_s(p_8, (255UL ^ p_8))) & p_8) == 0UL) & 0UL)) == 4294967288UL) == 0xECL)), p_8)))), l_102)) > p_8);
            }
            for (g_21 = 6; (g_21 > 8); ++g_21)
            { 
                uint16_t l_121 = 0UL;
                int32_t l_122 = 0xF9CC6DD0L;
                g_86 = (safe_mul_func_uint8_t_u_u(((+(safe_mod_func_int16_t_s_s(0x8204L, g_101[0]))) , ((l_121 = p_8) == l_82[2][0])), l_113));
                l_122 = (l_113 &= ((g_101[0] > (((8L != (0L > g_85[0][1])) , p_8) & 0UL)) || g_85[0][1]));
            }
        }
    }
    else
    { 
        const int16_t l_129 = 1L;
        g_86 = (safe_mul_func_uint8_t_u_u(p_8, ((l_87 = ((((safe_div_func_int32_t_s_s(g_42[0], (safe_rshift_func_int8_t_s_u(((l_129 < l_129) != g_85[0][1]), g_85[0][1])))) , 0x36L) ^ 9UL) <= 1L)) != 4294967293UL)));
    }
    for (g_86 = 0; (g_86 != 18); g_86 = safe_add_func_int16_t_s_s(g_86, 9))
    { 
        const uint64_t l_132[2] = {0x65D561E864F27C2CLL,0x65D561E864F27C2CLL};
        int32_t l_133[4] = {(-1L),(-1L),(-1L),(-1L)};
        int32_t l_160 = 1L;
        int i;
        if (l_132[1])
        { 
            int32_t l_134 = 0xA0A7BF82L;
            int32_t l_135 = 8L;
            g_136[1]--;
            if ((((safe_sub_func_int8_t_s_s((l_87 = ((g_136[1] == (g_145 = (((safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((-4L), g_85[0][0])), 14)) , l_135) && 0xA44B56EB578CF177LL))) != (-10L))), p_8)) != l_135) > p_8))
            { 
                int8_t l_150[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_150[i] = 0x46L;
                l_150[1] ^= ((safe_rshift_func_int8_t_s_u(g_21, 5)) || (safe_rshift_func_int8_t_s_s((-1L), 7)));
                l_133[2] = (safe_unary_minus_func_uint16_t_u((!(g_83[2] = (safe_mod_func_uint8_t_u_u((p_8 != (((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(p_8, 2)), (g_145 , g_75))) , p_8) == 0x82440A59923F436BLL)), p_8))))));
            }
            else
            { 
                return g_101[0];
            }
            g_75 = p_8;
        }
        else
        { 
            int64_t l_159[2];
            int i;
            for (i = 0; i < 2; i++)
                l_159[i] = 0xF9D31CE9D0E818DDLL;
            g_162++;
            if (g_85[0][1])
            { 
                uint32_t l_178 = 0xADDF9D14L;
                if (g_41)
                    goto lbl_165;
                g_75 = l_132[1];
                l_87 = ((safe_sub_func_int32_t_s_s(((safe_add_func_int8_t_s_s(g_145, (g_179 = ((((safe_add_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((safe_add_func_int16_t_s_s((((65530UL | g_136[0]) == 0x82F86C40L) < 18446744073709551609UL), 65535UL)) & 3L) & p_8), l_178)), 5)) >= 0x04B165B3L) || p_8), g_161)) != p_8) ^ l_133[1]) || 0xB3AAL)))) >= l_34), 0xE0092A32L)) , 0x1A9E36F5L);
            }
            else
            { 
                l_33 = ((0x1BC3C69CL > (safe_mod_func_int32_t_s_s((p_8 ^ (safe_add_func_uint16_t_u_u(g_101[1], 65530UL))), g_101[0]))) == 7L);
            }
        }
        if ((p_8 , (safe_sub_func_uint64_t_u_u(1UL, ((safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u((l_36[2][1] != p_8), 0xB69AL)), l_133[1])) && 0L)))))
        { 
            uint16_t l_192 = 1UL;
            int32_t l_204[3][4] = {{0xB4213D0CL,(-8L),0xB4213D0CL,(-8L)},{0xB4213D0CL,(-8L),0xB4213D0CL,(-8L)},{0xB4213D0CL,(-8L),0xB4213D0CL,(-8L)}};
            int i, j;
            for (g_63 = 19; (g_63 <= 14); g_63--)
            { 
                l_192 = p_8;
                g_201 |= (g_75 &= (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((l_192 && (0x908CA6926699BEB6LL <= (safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(p_8, p_8)) , 1UL), 0xC598L)))), g_3)), g_85[0][1])));
            }
            for (g_161 = 0; (g_161 >= 16); g_161 = safe_add_func_uint8_t_u_u(g_161, 1))
            { 
                const int64_t l_211 = (-4L);
                int32_t l_225 = 0x1678A96FL;
                l_204[0][0] = l_192;
                l_204[0][0] &= (((p_8 | (l_133[2] &= (safe_sub_func_uint32_t_u_u((l_218 |= (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_211 <= (((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((++g_145), p_8)), l_211)) | (-5L)) | g_21)), g_75)), 65535UL))), g_101[0])))) | g_179) < g_35[1]);
                g_75 = (safe_rshift_func_int16_t_s_s((l_204[0][0] = (l_225 = (p_8 , ((p_8 < ((((((+(((((safe_lshift_func_uint16_t_u_u((l_133[2] ^= (+g_42[0])), 0)) && 8UL) > g_136[1]) || 1L) > g_21)) == p_8) < 1L) <= l_22) != g_83[2]) | 1UL)) <= 0x2162L)))), 2));
            }
            for (g_179 = (-14); (g_179 <= 10); g_179++)
            { 
                if (g_136[1])
                    break;
            }
        }
        else
        { 
            for (l_34 = 0; (l_34 != (-18)); l_34 = safe_sub_func_uint16_t_u_u(l_34, 6))
            { 
                ++g_231;
            }
        }
        if (((0UL && (safe_mul_func_uint16_t_u_u(g_85[0][0], (((l_133[1] = ((safe_div_func_uint32_t_u_u((safe_div_func_int8_t_s_s((~p_8), 0x3CL)), 0x24419D7CL)) < l_218)) && 0xF8BB27ABL) <= 0x63L)))) || g_21))
        { 
            for (l_33 = (-15); (l_33 > (-9)); l_33 = safe_add_func_int8_t_s_s(l_33, 5))
            { 
                uint16_t l_254[2];
                int32_t l_261 = 1L;
                int32_t l_262 = 0x6229C2D6L;
                int i;
                for (i = 0; i < 2; i++)
                    l_254[i] = 9UL;
                l_84 = (safe_rshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_u(g_85[0][1], ((!((safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((l_133[3] |= (-6L)), g_101[0])) > g_179) < 65528UL), l_254[1])), p_8)) < l_254[1])) != l_88))) || p_8) > p_8), 4));
                g_75 = (l_87 = (safe_rshift_func_uint8_t_u_s((g_35[1] > g_101[0]), (safe_div_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((g_231 |= g_136[1]), (-9L))), l_22)))));
                --g_263;
            }
        }
        else
        { 
            uint32_t l_273 = 18446744073709551614UL;
            int32_t l_289 = 0x31C04559L;
            int32_t l_290 = 3L;
            int32_t l_291 = 0x71BE73D2L;
            if (((255UL | (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((!g_179), ((safe_div_func_uint32_t_u_u(p_8, g_136[1])) < p_8))), l_133[1]))) | l_273))
            { 
                int8_t l_282 = 0x86L;
                int32_t l_288 = (-5L);
                if (l_273)
                    break;
                l_33 |= (safe_add_func_int8_t_s_s(((((l_133[1] = (safe_rshift_func_int16_t_s_u((0x5001E59A4788454ALL == (safe_mul_func_uint16_t_u_u(((g_145 |= (((safe_div_func_int32_t_s_s(((g_35[1] , g_85[0][1]) | l_282), l_273)) , 0UL) >= 0xD5E3L)) | g_179), 0x9699L))), l_273))) < 1UL) , l_133[1]) <= g_263), p_8));
                g_75 = ((safe_lshift_func_int8_t_s_s(g_35[1], ((safe_div_func_int16_t_s_s((-4L), (l_288 = ((((g_287[0] = (g_136[1] = ((g_42[0] != 1L) ^ l_33))) > 18446744073709551615UL) > p_8) ^ g_21)))) , p_8))) > p_8);
            }
            else
            { 
                if (p_8)
                    break;
            }
            ++g_292;
            return l_133[1];
        }
    }
    return g_162;
}



static uint32_t  func_11(int64_t  p_12)
{ 
    uint8_t l_13 = 246UL;
    return l_13;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_35[i], "g_35[i]", print_hash_value);

    }
    transparent_crc(g_41, "g_41", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_42[i], "g_42[i]", print_hash_value);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_85[i][j], "g_85[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_101[i], "g_101[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_136[i], "g_136[i]", print_hash_value);

    }
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_287[i], "g_287[i]", print_hash_value);

    }
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
