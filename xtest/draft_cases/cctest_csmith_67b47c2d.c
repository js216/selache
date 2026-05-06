// SPDX-License-Identifier: MIT
// cctest_csmith_67b47c2d.c --- cctest case csmith_67b47c2d (csmith seed 1739881517)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdbbaf19e */

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

// Options:   -s 1739881517 -o /tmp/csmith_gen_odo3k1du/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_2 = 0L;
static uint32_t g_5 = 4294967291UL;
static int32_t g_10 = 0x4CAF14C9L;
static int8_t g_11 = 0xCFL;
static uint32_t g_12 = 1UL;
static int32_t g_23 = 0xE80031AAL;
static int32_t g_36 = (-4L);
static uint32_t g_37 = 4294967288UL;
static uint32_t g_132 = 0xC3AD06F0L;
static int32_t g_133[2][3] = {{4L,4L,4L},{4L,4L,4L}};
static int16_t g_149[4][4] = {{(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L)},{(-5L),(-5L),(-5L),(-5L)}};
static uint32_t g_175[2] = {18446744073709551614UL,18446744073709551614UL};
static int8_t g_185 = 4L;
static int8_t g_211 = (-1L);
static int32_t g_234[5][2][2] = {{{0x6C4515C5L,1L},{0x6B4405EBL,0L}},{{(-1L),(-1L)},{0x6C4515C5L,(-1L)}},{{(-1L),0L},{0x6B4405EBL,1L}},{{0x6C4515C5L,0x6B4405EBL},{1L,0L}},{{1L,0x6B4405EBL},{0x6C4515C5L,1L}}};
static int32_t g_236 = 7L;
static uint64_t g_257 = 0xCA0C704A2BC286E9LL;



static uint8_t  func_1(void);
static uint32_t  func_15(uint32_t  p_16, const int32_t  p_17, int8_t  p_18, uint8_t  p_19);
static uint32_t  func_28(int32_t  p_29, int32_t  p_30, uint8_t  p_31, uint8_t  p_32);
static int32_t  func_40(int16_t  p_41, int32_t  p_42, int32_t  p_43, uint32_t  p_44);




static uint8_t  func_1(void)
{ 
    uint32_t l_20 = 0x38E85A7BL;
    int32_t l_35 = (-6L);
    int64_t l_232 = 2L;
    int32_t l_244[2][3];
    uint8_t l_255[1][3];
    uint32_t l_269 = 0x17CDE6F3L;
    uint16_t l_270[3][2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_244[i][j] = (-1L);
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_255[i][j] = 255UL;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_270[i][j] = 0x9453L;
    }
    for (g_2 = 0; (g_2 > 12); g_2++)
    { 
        int32_t l_8 = (-2L);
        int16_t l_21 = (-1L);
        int32_t l_233 = 4L;
        g_5 = 9L;
        if (g_2)
        { 
            for (g_5 = 27; (g_5 != 6); --g_5)
            { 
                int16_t l_9 = (-1L);
                g_12--;
            }
            g_23 = (g_2 > func_15(l_8, l_8, l_20, l_21));
        }
        else
        { 
            int8_t l_38 = 0L;
            int32_t l_237[2];
            int i;
            for (i = 0; i < 2; i++)
                l_237[i] = (-1L);
            for (l_21 = 0; (l_21 <= 1); l_21++)
            { 
                uint32_t l_39 = 0x46983C17L;
                l_233 ^= (((5L & (safe_sub_func_int32_t_s_s(func_15(func_28((((l_20 > (g_11 = (g_37 &= (g_36 ^= (l_35 &= ((l_8 = (((g_11 , (safe_mod_func_int16_t_s_s(l_20, g_5))) | l_20) , l_21)) && 0x39L)))))) == l_38) || 1L), l_39, g_10, g_2), l_21, l_232, g_185), 4294967295UL))) != g_2) > g_2);
                g_36 ^= 0L;
                g_36 = (g_2 < 4294967287UL);
            }
            for (l_21 = 1; (l_21 >= 0); l_21 -= 1)
            { 
                int32_t l_242 = 0x8F5DB1FEL;
                int32_t l_243 = 6L;
                uint8_t l_256 = 255UL;
                int i, j;
                l_244[1][2] = (((g_234[3][0][1] &= g_133[l_21][(l_21 + 1)]) == (~(g_236 |= l_38))) < (l_237[1] ^ (safe_mul_func_uint8_t_u_u(((l_243 = ((l_242 = ((((safe_sub_func_uint32_t_u_u(g_175[0], g_37)) > g_11) ^ g_10) == l_237[1])) ^ g_132)) || (-1L)), g_133[l_21][(l_21 + 1)]))));
                g_133[1][2] = (g_2 == ((safe_mul_func_int16_t_s_s(l_232, 0x7970L)) <= g_234[3][0][1]));
                g_133[0][1] = ((0x8DL | (safe_sub_func_int64_t_s_s(((safe_mod_func_int8_t_s_s(((g_257 &= (((g_234[1][1][0] && (safe_div_func_int8_t_s_s(g_211, ((safe_div_func_int8_t_s_s((l_244[0][1] = l_255[0][2]), 0x02L)) ^ l_256)))) == l_237[1]) & 1L)) ^ 0L), 0xDBL)) , l_242), 0xCBC6C6E8326687B0LL))) && g_23);
            }
        }
    }
    for (g_2 = 0; (g_2 >= 0); g_2 -= 1)
    { 
        int64_t l_262[2];
        int i;
        for (i = 0; i < 2; i++)
            l_262[i] = 0xC4C82588ED02343ALL;
        for (g_236 = 1; (g_236 >= 0); g_236 -= 1)
        { 
            int i, j;
            if (l_255[g_2][(g_2 + 2)])
                break;
            for (g_5 = 0; (g_5 <= 0); g_5 += 1)
            { 
                int i, j;
                g_133[0][1] = (safe_add_func_int8_t_s_s(g_133[(g_5 + 1)][g_2], (safe_div_func_int32_t_s_s(0xEC835524L, ((0x17L < g_10) , 4294967289UL)))));
                if (l_262[0])
                    continue;
            }
        }
        l_35 = ((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_269, l_262[0])), g_211)) < ((5UL >= g_149[1][2]) <= l_270[0][1])), l_262[0])) & g_5);
        for (l_269 = 0; (l_269 <= 0); l_269 += 1)
        { 
            int i, j;
            return g_133[g_2][g_2];
        }
    }
    for (l_35 = 10; (l_35 == (-7)); l_35--)
    { 
        if (g_2)
            break;
        return g_36;
    }
    return g_257;
}



static uint32_t  func_15(uint32_t  p_16, const int32_t  p_17, int8_t  p_18, uint8_t  p_19)
{ 
    uint64_t l_22 = 0xFE57F6CC9CA3191BLL;
    l_22 = (-7L);
    return p_17;
}



static uint32_t  func_28(int32_t  p_29, int32_t  p_30, uint8_t  p_31, uint8_t  p_32)
{ 
    int32_t l_49 = 0x3C94681CL;
    int32_t l_50 = 1L;
    int16_t l_61 = (-1L);
    int16_t l_102[3][5];
    int32_t l_134 = 0xA8F31C07L;
    int32_t l_191 = 1L;
    int32_t l_193 = 0L;
    int32_t l_194 = 0xE52C1F7EL;
    int32_t l_200 = (-1L);
    int32_t l_201 = 0x41F61FBCL;
    int32_t l_202 = 0L;
    int32_t l_203 = 0x1906B434L;
    int32_t l_204[1];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_102[i][j] = 0x5A17L;
    }
    for (i = 0; i < 1; i++)
        l_204[i] = (-1L);
    if (func_40((safe_lshift_func_uint16_t_u_s((((((safe_mul_func_uint16_t_u_u((l_49 = 65535UL), ((((((((l_50 < ((safe_sub_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((-4L) != (((safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s(g_36, g_37)), g_36)) <= (-1L)) ^ 0UL)), l_61)), 0x1771L)) , l_61), g_11)) , l_50)) | l_50) != l_61) & 65535UL) >= p_31) <= p_31) > p_31) ^ p_30))) ^ g_11) , 0x35FAL) > p_29) && (-3L)), p_31)), g_23, l_61, l_50))
    { 
        int16_t l_76[5][3] = {{(-3L),(-3L),0x702DL},{0x5FFEL,0x702DL,0x702DL},{0x702DL,(-3L),4L},{0x5FFEL,(-3L),0x5FFEL},{0x2136L,0x702DL,4L}};
        int32_t l_93 = (-1L);
        int32_t l_190[4] = {1L,1L,1L,1L};
        int i, j;
        if ((((-1L) > (safe_div_func_int16_t_s_s(((0xBA7019510DDF4F35LL | (l_50 |= (safe_sub_func_int32_t_s_s(((g_11 = ((safe_lshift_func_int16_t_s_u((0x6980504CL | (safe_mul_func_int16_t_s_s(l_76[4][2], g_12))), g_37)) || l_49)) != 0x5AL), g_2)))) || p_31), l_76[4][2]))) < 0x3E9ABA4AL))
        { 
            const uint16_t l_85[2][2] = {{0x8BA3L,0x8BA3L},{0x8BA3L,0x8BA3L}};
            int i, j;
            g_23 = ((g_5 = ((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((p_32 > (g_10 >= (safe_sub_func_int32_t_s_s((p_29 = (l_76[4][2] >= (safe_add_func_int8_t_s_s(l_85[1][1], p_31)))), 4294967295UL)))) && 0x0CCD11DCE253A7B5LL), 0x69C3L)), p_32)) < g_37)) == l_61);
            p_29 = (((p_31 , l_50) || 0x31L) , l_85[1][1]);
        }
        else
        { 
            int64_t l_96 = 0xB3380F2F45F95DF2LL;
            uint32_t l_101 = 0UL;
            int32_t l_103 = 0xBA0D3790L;
            p_30 |= ((((safe_add_func_uint32_t_u_u((l_93 = (!(safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(p_31, l_76[4][0])), 6)))), (g_23 = g_5))) || (safe_lshift_func_uint8_t_u_u(g_23, l_96))) ^ 7L) >= g_37);
            l_103 &= (g_23 = ((l_101 |= (safe_rshift_func_uint16_t_u_u((p_29 , ((((safe_sub_func_int32_t_s_s(g_5, g_10)) && ((0xEB4CD7CE17D65089LL & g_37) && p_31)) , p_31) ^ p_32)), p_32))) ^ l_102[2][3]));
            g_36 = ((((l_103 = p_29) && 4UL) ^ (safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(p_31, 4L)), 6))) | g_2);
        }
        if ((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_int8_t_s_s((((l_134 = (safe_div_func_int64_t_s_s((g_133[0][1] &= (p_32 && (~((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((1UL | ((l_50 = (safe_lshift_func_int8_t_s_u(((safe_add_func_int64_t_s_s((safe_div_func_int8_t_s_s(((g_132 = (safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s((((l_50 > p_31) ^ p_32) && 65527UL), p_29)), g_23)) < p_32), 6))) & g_12), 1UL)), g_10)) || p_32), 0))) | 2L)), g_12)), l_61)) | 0x85L)))), 0x39B07A7798753EC5LL))) > l_49) < p_30), 5)) | g_11) != 0x4AL) >= g_12), 7)))))
        { 
            uint32_t l_146 = 0x2D9EA518L;
            int32_t l_155 = 0x493E54A6L;
            for (g_5 = 14; (g_5 == 31); g_5 = safe_add_func_uint8_t_u_u(g_5, 1))
            { 
                uint64_t l_137 = 4UL;
                l_137--;
            }
            if ((l_134 && (safe_mod_func_int64_t_s_s(((l_50 = (safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(l_146, (g_149[2][2] = ((safe_rshift_func_uint16_t_u_s(0x69A0L, 1)) <= (-5L))))) != g_133[0][1]), g_133[0][1]))) >= g_12), 0xB8980116228B0808LL))))
            { 
                int8_t l_152 = 0xF0L;
                l_152 &= (safe_mul_func_uint16_t_u_u(7UL, g_149[2][2]));
                p_30 = (safe_rshift_func_int8_t_s_u(l_155, 0));
            }
            else
            { 
                int64_t l_167 = (-1L);
                g_36 = (safe_unary_minus_func_int64_t_s((((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((p_32 = (p_32 != 0x986691D7L)), ((safe_add_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(1L, l_167)) <= 0x5CC4140F939D135ALL), p_29)) , l_102[2][2]))) | 0x26CAE3633256DFF3LL) || g_133[0][1]), 2UL)), g_133[1][1])) < p_31) | p_29)));
            }
            return p_32;
        }
        else
        { 
            int8_t l_181 = (-5L);
            int32_t l_184 = 0x78202B69L;
            int32_t l_186 = 0xDFC12834L;
            int32_t l_189 = 0xD62B9E97L;
            int32_t l_192 = 0xFEE22BCDL;
            int32_t l_196 = 0xAE48550CL;
            int32_t l_197 = 0x3078386DL;
            int32_t l_198 = 0xE8087EC7L;
            int32_t l_199 = 0x0A1B9E14L;
            uint8_t l_205 = 0xAEL;
            if ((l_93 | (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((l_50 &= (g_175[1] |= (+l_49))) <= (safe_add_func_int32_t_s_s((g_133[0][1] <= (((((-3L) > l_76[1][2]) , l_93) < p_32) , g_37)), l_93))), l_61)), 5)), 6))))
            { 
                l_93 = (safe_unary_minus_func_int16_t_s((safe_add_func_uint64_t_u_u(g_149[1][2], 0x21D835F2621DCD0CLL))));
            }
            else
            { 
                int8_t l_182 = 5L;
                int32_t l_183 = 0x9CAFDD34L;
                int32_t l_187 = (-1L);
                int64_t l_188 = 1L;
                int32_t l_195[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_195[i] = (-1L);
                l_181 |= (-1L);
                l_183 |= l_182;
                --l_205;
            }
            for (g_12 = (-9); (g_12 != 26); g_12 = safe_add_func_uint64_t_u_u(g_12, 7))
            { 
                int64_t l_216 = (-6L);
                g_23 = ((+(g_211 = (l_197 &= 0x9DL))) , (g_133[0][1] < ((((((safe_mul_func_int8_t_s_s((g_11 = (0UL & (((((safe_sub_func_uint8_t_u_u((l_184 <= 65535UL), p_32)) && (-1L)) == 0UL) > g_2) || p_29))), l_216)) , p_29) == g_12) , l_216) < g_5) & p_30)));
                l_50 ^= (safe_lshift_func_int16_t_s_s(5L, 3));
                g_23 = (p_29 = (l_184 = p_32));
            }
            for (g_10 = 3; (g_10 >= 0); g_10 -= 1)
            { 
                int8_t l_227 = (-1L);
                int i;
                l_190[g_10] = l_190[g_10];
                l_227 = ((++g_175[1]) , (1L < (safe_lshift_func_uint8_t_u_s((((((safe_add_func_int8_t_s_s(l_190[g_10], (safe_sub_func_int64_t_s_s((l_190[g_10] == (l_191 &= l_190[g_10])), l_190[g_10])))) & g_149[2][2]) <= g_23) <= p_31) >= p_31), p_29))));
                return p_31;
            }
        }
    }
    else
    { 
        g_23 ^= (((safe_div_func_int32_t_s_s((p_29 && (safe_lshift_func_uint16_t_u_u(((g_175[1] = g_175[1]) , g_36), (0x4D27D01EL | 4294967286UL)))), p_29)) | l_193) | 8UL);
    }
    return l_61;
}



static int32_t  func_40(int16_t  p_41, int32_t  p_42, int32_t  p_43, uint32_t  p_44)
{ 
    int64_t l_63 = 0x58E5840947845337LL;
    uint32_t l_66 = 0xF3AA798DL;
    int8_t l_67 = 0x7FL;
    g_23 ^= (safe_unary_minus_func_int16_t_s((p_41 &= (l_63 = 0L))));
    p_43 = (0x2DL > (l_66 = ((safe_lshift_func_int8_t_s_s(1L, 5)) >= p_42)));
    return l_67;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_133[i][j], "g_133[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_149[i][j], "g_149[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_175[i], "g_175[i]", print_hash_value);

    }
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_234[i][j][k], "g_234[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
