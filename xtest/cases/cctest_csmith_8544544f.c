// SPDX-License-Identifier: MIT
// cctest_csmith_8544544f.c --- cctest case csmith_8544544f (csmith seed 2235847759)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x34401f7f */
/* @exp_ticks 0x3bdf */

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

// Options:   -s 2235847759 -o /tmp/csmith_gen_407vrav9/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int16_t g_2[4][2] = {{0x464BL,0x464BL},{0x464BL,0x464BL},{0x464BL,0x464BL},{0x464BL,0x464BL}};
static int32_t g_3 = 0L;
static int64_t g_7 = 0xF9D7865925EF2C36LL;
static uint32_t g_14 = 0x8AB5457DL;
static int32_t g_50[2] = {0x0133D496L,0x0133D496L};
static int8_t g_51[4][3] = {{0x45L,0x45L,0x45L},{4L,4L,4L},{0x45L,0x45L,0x45L},{4L,4L,4L}};
static int8_t g_52 = 7L;
static int32_t g_54 = 0L;
static int64_t g_102 = 1L;
static uint64_t g_107 = 0xB24405C6DFA21EB8LL;
static int16_t g_127 = 0xA0C5L;
static int8_t g_128 = 0x45L;
static int64_t g_129 = 0xECE75099C3224A64LL;
static int32_t g_130[3][3] = {{4L,4L,4L},{4L,4L,4L},{4L,4L,4L}};
static uint64_t g_147 = 9UL;
static uint64_t g_163[4] = {0UL,0UL,0UL,0UL};
static uint32_t g_176 = 0xD28ECC62L;



static int64_t  func_1(void);
static int64_t  func_21(int32_t  p_22, int64_t  p_23, uint32_t  p_24, int8_t  p_25, uint16_t  p_26);
static int32_t  func_27(int8_t  p_28, uint32_t  p_29, uint8_t  p_30, int32_t  p_31, int32_t  p_32);




static int64_t  func_1(void)
{ 
    int16_t l_6 = 0xCC25L;
    int8_t l_17[1];
    int32_t l_146 = (-3L);
    int16_t l_179 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_17[i] = (-1L);
    if ((g_2[1][0] = 0L))
    { 
        uint16_t l_8[3][3] = {{8UL,8UL,8UL},{0x106EL,0x106EL,0x106EL},{8UL,8UL,8UL}};
        int64_t l_33 = 0x9C6FEC1B16EB2D36LL;
        int32_t l_145[2];
        int32_t l_148 = 0x89CB40E9L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_145[i] = 2L;
        for (g_3 = 6; (g_3 < 15); ++g_3)
        { 
            g_7 |= (l_6 = (g_3 <= g_3));
            ++l_8[2][1];
            for (l_6 = (-14); (l_6 < 29); ++l_6)
            { 
                int32_t l_13 = (-2L);
                ++g_14;
            }
        }
        l_148 ^= ((l_17[0] != (g_147 = (+(l_146 = (((l_145[0] = (((((safe_mod_func_int64_t_s_s(1L, func_21(func_27(l_33, g_3, g_2[0][1], g_2[2][0], l_17[0]), g_7, g_2[3][0], g_7, g_7))) == l_8[2][1]) ^ g_50[1]) | g_2[1][0]) , g_51[1][2])) >= g_130[2][1]) , g_127))))) , l_145[0]);
    }
    else
    { 
        int32_t l_153 = 0x3C4F9E1AL;
        uint32_t l_171 = 0x65D8E466L;
        g_3 = (g_54 ^= (((l_146 = (g_130[0][0] = ((safe_mul_func_int16_t_s_s(((g_102 | ((safe_div_func_int16_t_s_s((g_127 |= 0x5848L), l_6)) ^ 0UL)) | 0x98L), l_153)) , 0xBC88E9F2L))) < g_52) ^ g_107));
        for (g_129 = 0; (g_129 <= (-16)); --g_129)
        { 
            int16_t l_160[2];
            int32_t l_164[1];
            int i;
            for (i = 0; i < 2; i++)
                l_160[i] = 0x596EL;
            for (i = 0; i < 1; i++)
                l_164[i] = 0x348BD332L;
            for (l_153 = 27; (l_153 <= 25); l_153--)
            { 
                int64_t l_162[3];
                int32_t l_165 = 0L;
                int i;
                for (i = 0; i < 3; i++)
                    l_162[i] = 0xFC3FE24BE3DF8C06LL;
                l_164[0] |= ((l_146 ^= ((safe_mod_func_int64_t_s_s(l_160[0], (g_163[0] |= (g_54 , (!((g_2[1][0] != l_162[2]) >= 0x94937C963353D154LL)))))) | 3L)) || g_107);
                l_165 = 0x6CBE3BFDL;
            }
        }
        g_3 = (safe_mod_func_uint64_t_u_u((g_107 = ((safe_unary_minus_func_uint32_t_u(((safe_add_func_int16_t_s_s(((g_7 &= g_127) != l_171), l_146)) && l_171))) , 0xF509ED19117335FFLL)), g_128));
    }
    l_179 ^= (l_17[0] < ((((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((l_146 = (--g_176)) , (l_17[0] <= ((l_146 = 0xD4L) | l_6))), g_129)), 0xDB3BB4DD17DDF175LL)) >= l_6) , 1L) <= 6L));
    return l_17[0];
}



static int64_t  func_21(int32_t  p_22, int64_t  p_23, uint32_t  p_24, int8_t  p_25, uint16_t  p_26)
{ 
    int16_t l_42 = 0x9AC9L;
    int32_t l_43 = 1L;
    int32_t l_53 = (-9L);
    int32_t l_126 = 0x78791A53L;
    int32_t l_131 = 1L;
    int32_t l_132 = (-9L);
    int32_t l_133 = 0x401126FEL;
    int32_t l_134 = (-8L);
    int32_t l_135 = 0L;
    int32_t l_136 = 0L;
    uint64_t l_137 = 18446744073709551615UL;
    for (g_7 = 24; (g_7 > 8); g_7--)
    { 
        uint64_t l_41 = 0xAEAD2214C259DBA5LL;
        int32_t l_49 = 0xE820F90FL;
        int32_t l_125[4][4] = {{0L,0L,0L,8L},{8L,0x9BF173AAL,0L,0x9BF173AAL},{(-6L),(-1L),0xDA84259BL,0L},{0x9BF173AAL,(-1L),(-1L),0x9BF173AAL}};
        int i, j;
        l_43 = ((l_42 = (safe_add_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u(l_41, 0L)) != g_14), g_14))) | p_23);
        if (p_26)
        { 
            int32_t l_48 = 0x316D0046L;
            uint32_t l_55 = 0x1F81F13DL;
            int32_t l_93 = 0L;
            for (l_41 = 0; (l_41 == 54); l_41 = safe_add_func_uint8_t_u_u(l_41, 5))
            { 
                uint32_t l_47 = 0UL;
                l_47 = (!l_41);
                return g_2[3][0];
            }
            l_55++;
            if ((((safe_lshift_func_int16_t_s_s(l_55, 5)) < (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(l_48, (safe_div_func_int16_t_s_s((safe_mul_func_int16_t_s_s((-8L), 0x225DL)), g_50[0])))), g_2[3][1])), l_49)), p_25))) && l_42))
            { 
                int32_t l_92 = 0x0EC62D7FL;
                l_93 = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((p_23 < (safe_mul_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(p_22, (safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(p_23, l_55)), l_42)), g_50[1])))), 8)) >= g_50[0]), l_92)), l_53)) , l_43) && l_55) > (-10L)), p_24))), l_49)), l_42));
                g_3 = ((safe_mul_func_uint16_t_u_u((g_102 = (((((safe_mod_func_int8_t_s_s(((l_49 = g_50[1]) != (((l_92 <= ((l_43 = (safe_div_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((g_52 || p_25), l_41)), p_25))) , 0xDEE15503L)) , p_26) >= p_25)), g_2[1][1])) , p_24) & 8UL) < 0x2AB26C3A74F57033LL) , p_26)), 0xAE66L)) , (-8L));
            }
            else
            { 
                uint32_t l_110[1][4] = {{2UL,2UL,2UL,2UL}};
                int i, j;
                l_93 = (safe_div_func_int64_t_s_s(((safe_add_func_int64_t_s_s(((++g_107) | l_110[0][3]), (0xB4391DAAL >= (p_24 , (-6L))))) > l_48), l_110[0][3]));
                l_53 = ((((safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_93, 5)) == (safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_uint32_t_u(((((((g_102 = l_110[0][3]) > ((l_42 ^ 0x5E5E7DF30550D74ALL) == l_55)) < g_52) && g_51[2][2]) , g_3) , 0x4A264326L))) || 4L), (-1L)))), 0x90EDL)) , p_26) < 0xD9L) > p_25);
            }
        }
        else
        { 
            int16_t l_122 = 0x4C50L;
            int32_t l_123 = 1L;
            int32_t l_124[1];
            uint32_t l_142 = 0x6DD1CD03L;
            int i;
            for (i = 0; i < 1; i++)
                l_124[i] = 0x9EA69D9FL;
            g_3 = (l_43 = (g_54 = ((1L < (((safe_div_func_uint8_t_u_u(((p_24 || (safe_sub_func_int32_t_s_s(l_122, g_54))) || g_54), g_107)) | l_41) , 1L)) == 0x3A45608AL)));
            ++l_137;
            for (p_24 = 0; (p_24 != 30); p_24 = safe_add_func_int8_t_s_s(p_24, 5))
            { 
                ++l_142;
            }
        }
    }
    return p_22;
}



static int32_t  func_27(int8_t  p_28, uint32_t  p_29, uint8_t  p_30, int32_t  p_31, int32_t  p_32)
{ 
    uint32_t l_34 = 18446744073709551615UL;
    g_3 ^= 1L;
    return l_34;
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
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_50[i], "g_50[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_51[i][j], "g_51[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_130[i][j], "g_130[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_147, "g_147", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_163[i], "g_163[i]", print_hash_value);

    }
    transparent_crc(g_176, "g_176", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
