// SPDX-License-Identifier: MIT
// cctest_csmith_086ec2e6.c --- cctest case csmith_086ec2e6 (csmith seed 141476582)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4fa157de */

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

// Options:   -s 141476582 -o /tmp/csmith_gen_p_64g8nw/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint32_t g_8 = 6UL;
static uint32_t g_47[1] = {0xE97EE8C4L};
static int32_t g_66 = 0xD11A6C9CL;
static uint8_t g_67 = 0x76L;
static int8_t g_76[4] = {1L,1L,1L,1L};
static int64_t g_143[3][4] = {{0x6C501646CDBDE630LL,0xC23E70AEA978AFB3LL,0xC23E70AEA978AFB3LL,0x6C501646CDBDE630LL},{0xC23E70AEA978AFB3LL,0x6C501646CDBDE630LL,0xC23E70AEA978AFB3LL,0xC23E70AEA978AFB3LL},{0x6C501646CDBDE630LL,0x6C501646CDBDE630LL,0x48F12A9C28C32186LL,0x6C501646CDBDE630LL}};
static int64_t g_144 = (-2L);
static uint16_t g_154 = 0UL;
static uint32_t g_165 = 0x9AE4E8F9L;
static int16_t g_185 = 0L;
static int64_t g_186 = 0x7A3848624F74BF3BLL;
static uint64_t g_189[3][3] = {{0xC2D907B652E5DFB3LL,0xC2D907B652E5DFB3LL,0xC2D907B652E5DFB3LL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0xC2D907B652E5DFB3LL,0xC2D907B652E5DFB3LL,0xC2D907B652E5DFB3LL}};
static int32_t g_202 = 0x187A65D3L;
static int16_t g_204 = 0x65E2L;
static int32_t g_205 = 0x6E7D2BA4L;
static int32_t g_207 = (-1L);
static uint64_t g_208 = 0x17FA6E5F86D9A306LL;
static int64_t g_215[1] = {(-10L)};



static int8_t  func_1(void);
static int64_t  func_2(uint32_t  p_3, uint16_t  p_4, int32_t  p_5, int32_t  p_6, int16_t  p_7);
static int32_t  func_14(uint32_t  p_15, int64_t  p_16);




static int8_t  func_1(void)
{ 
    int32_t l_9 = 0xC14173BFL;
    int32_t l_183 = (-1L);
    int32_t l_187 = 0x373CAA1AL;
    int32_t l_188 = 0x7A9A96ADL;
    int8_t l_214 = 0x86L;
    if ((6L | func_2(g_8, (g_8 > g_8), l_9, g_8, l_9)))
    { 
        return g_66;
    }
    else
    { 
        int16_t l_180[2][3] = {{(-7L),(-1L),(-7L)},{(-7L),(-1L),(-7L)}};
        int16_t l_181 = 6L;
        int32_t l_182 = 0xC5C9A551L;
        int32_t l_184[4][1] = {{(-10L)},{(-1L)},{(-10L)},{(-1L)}};
        int i, j;
        l_181 &= (safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_9 || (l_180[0][0] >= g_76[2])), l_9)), g_144));
        --g_189[2][0];
    }
    l_187 = (g_66 = (safe_sub_func_uint32_t_u_u((0x6885L || l_187), g_189[2][0])));
    if ((g_185 & ((g_154 = 3UL) != 0UL)))
    { 
        int8_t l_200 = (-6L);
        int32_t l_201 = (-4L);
        int32_t l_203 = 0x8DF10AD9L;
        int32_t l_206[3];
        int i;
        for (i = 0; i < 3; i++)
            l_206[i] = 2L;
lbl_211:
        l_187 = (((safe_mod_func_int64_t_s_s(((safe_mod_func_int64_t_s_s(g_76[2], l_200)) , ((-6L) == l_200)), 0x8241A347C53A199ALL)) != (-10L)) <= g_47[0]);
        ++g_208;
        if (g_8)
            goto lbl_211;
    }
    else
    { 
        uint16_t l_212 = 0x1A2BL;
        int32_t l_213 = 0x1BE6A337L;
        int16_t l_216[1][1];
        int32_t l_217 = 2L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_216[i][j] = 0xAF3CL;
        }
        l_217 = (((((((l_213 = l_212) != (((l_212 | (l_214 >= g_207)) < 0x1B25924D1F9F7833LL) , l_212)) < 0xAEA30616L) , g_207) | g_208) , g_215[0]) >= l_216[0][0]);
    }
    return g_47[0];
}



static int64_t  func_2(uint32_t  p_3, uint16_t  p_4, int32_t  p_5, int32_t  p_6, int16_t  p_7)
{ 
    const uint8_t l_10 = 0x68L;
    int32_t l_11 = (-3L);
    int32_t l_133 = (-1L);
    int64_t l_147 = 1L;
    int32_t l_164 = 0x898A221AL;
    if ((l_10 != g_8))
    { 
        uint64_t l_23 = 18446744073709551615UL;
lbl_86:
        l_11 = 0xB101AAE4L;
        for (p_4 = 0; (p_4 >= 13); p_4 = safe_add_func_uint32_t_u_u(p_4, 1))
        { 
            uint64_t l_78[1][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_78[i][j] = 0x115BA09F94EB44D5LL;
            }
            if (p_7)
            { 
                int16_t l_24 = 0x283BL;
                int32_t l_77 = 0xDBA47A58L;
                p_5 = func_14((safe_sub_func_int16_t_s_s((l_24 = (0xA53FL && (((safe_mod_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s(g_8, p_5)) , g_8), l_23)) , l_10) < p_6))), 0xB0FEL)), g_8);
                l_77 = p_7;
                l_78[0][0] = 2L;
            }
            else
            { 
                int32_t l_85 = 4L;
                p_5 = (g_66 = (safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(p_7, g_76[2])), (safe_mul_func_int16_t_s_s((l_85 >= 1L), g_66)))));
            }
            for (p_7 = 0; (p_7 <= 0); p_7 += 1)
            { 
                if (p_7)
                    goto lbl_86;
            }
            g_66 = 0x571DA884L;
        }
    }
    else
    { 
        int32_t l_100 = 0x1B095478L;
        int32_t l_131 = 0x970CE46CL;
        uint8_t l_153 = 252UL;
lbl_150:
        p_5 = (safe_unary_minus_func_uint32_t_u(l_11));
        if (((((safe_lshift_func_uint16_t_u_s(((l_11 & (((((safe_add_func_int8_t_s_s((((((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((g_76[2] = 0xAEL), ((g_66 , p_7) < 0xDC054819L))) || 0x666DF6EF7D18C36ELL), 0xA5F0D236L)), 6)) | l_10), 5)) , 1L) , 65531UL) , g_8) | g_47[0]), g_67)) & g_66) == l_100) , l_10) && l_100)) & 0xDAB1L), p_3)) != p_5) | l_100) >= 0x48L))
        { 
            int32_t l_115[3][4];
            int32_t l_136 = 0xDA10ACF0L;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_115[i][j] = 0x6864248AL;
            }
            g_66 = (safe_mod_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s((((l_100 & ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(255UL, ((safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s(0x28475ADB6E275997LL, (-1L))), 15)) , p_3))), 0xE6L)) & g_76[2])) < 0xC3AAFF43L) , p_6), 7)) , l_115[1][1]), 6)) == l_100) || l_115[1][0]), 0x12BF0D6E721E4501LL));
            for (l_11 = 0; (l_11 >= 16); ++l_11)
            { 
                uint32_t l_132 = 0UL;
                l_133 &= (l_132 ^= (((((((g_76[2] < 1UL) == ((safe_add_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((!((((0UL != p_4) , g_76[2]) && l_131) >= 3UL)) && 0xB5371582L), (-1L))) <= g_76[2]), g_76[2])), g_76[2])), p_3)) != 0xE0413CF2L), p_7)) , p_5), 1L)) ^ 0xE0L)) >= 3UL) == 0x4DE641B022312402LL) , 0xF9CA1EE1L) , 0x85L) > 0xEDL));
                g_66 = (safe_div_func_int16_t_s_s(0x4404L, (((l_136 = p_6) && ((((safe_rshift_func_uint8_t_u_u(l_10, p_3)) >= 5UL) > g_76[2]) & g_76[2])) & p_4)));
            }
            l_133 |= ((safe_lshift_func_int16_t_s_u(g_8, 4)) ^ (l_147 = (safe_sub_func_uint32_t_u_u((g_144 ^= (g_143[0][2] &= 0x5BE2A38AL)), (((g_47[0] > l_11) == g_76[2]) || 0L)))));
        }
        else
        { 
            const uint16_t l_158 = 0xFA3AL;
            if ((p_4 || (safe_lshift_func_uint8_t_u_u(g_76[3], 5))))
            { 
                int8_t l_155 = 0xB0L;
                if (l_10)
                    goto lbl_150;
                l_155 = (safe_lshift_func_uint16_t_u_u((0xF1L || (4294967295UL <= (g_154 = l_153))), 2));
            }
            else
            { 
                l_11 &= ((safe_mod_func_uint8_t_u_u(((l_158 ^ ((p_3 != 0xCBL) & l_147)) | l_158), g_67)) && g_154);
                return l_100;
            }
        }
        l_133 = ((l_131 |= (l_11 |= ((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_153 != (safe_unary_minus_func_int16_t_s((((g_143[0][2] | 0xBD5FL) >= p_5) < 0xCE436C4CL)))), g_76[2])), p_5)) & 0UL))) <= p_4);
    }
    --g_165;
    for (g_66 = 0; (g_66 == 1); ++g_66)
    { 
        uint8_t l_172 = 7UL;
        int32_t l_175 = (-5L);
        l_175 = (l_133 & (l_10 == (safe_div_func_uint64_t_u_u((++l_172), 0x7073E97851F52E6ALL))));
    }
    return l_10;
}



static int32_t  func_14(uint32_t  p_15, int64_t  p_16)
{ 
    int64_t l_36 = 0L;
    int16_t l_37 = 0x9257L;
    int32_t l_38 = (-1L);
    int8_t l_39 = 1L;
    if ((l_39 &= ((((safe_sub_func_int64_t_s_s((((safe_mod_func_int64_t_s_s((~(p_16 == (((g_8--) , (((l_38 = ((safe_mod_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u((((p_16 , p_16) <= l_36) > 0xBCL), 3)) ^ p_16) , 1UL) > 0xE6L), l_37)) | (-1L))) <= p_15) , (-1L))) || g_8))), p_15)) || 1L) , p_15), 0xF800085869896260LL)) >= 2L) & 0x720F84B0F4F2D891LL) & 0UL)))
    { 
        return g_8;
    }
    else
    { 
        int32_t l_61 = 0x206C165AL;
        int32_t l_65 = 0xA55CCBD9L;
        l_38 ^= (safe_div_func_uint64_t_u_u((p_15 <= ((((p_15 >= (+((safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((--g_47[0]) , l_39), 255UL)), p_15)) > g_8))) && g_8) < p_15) < p_16)), l_39));
        for (l_36 = 13; (l_36 <= (-5)); l_36--)
        { 
            int8_t l_56 = 0x28L;
            int32_t l_72 = (-2L);
            for (p_15 = (-20); (p_15 >= 51); ++p_15)
            { 
                uint8_t l_60 = 246UL;
                l_61 = (g_47[0] , (((safe_mul_func_int8_t_s_s(l_56, (safe_lshift_func_uint16_t_u_u((+g_47[0]), g_8)))) <= l_60) < p_15));
            }
            if (l_61)
                continue;
            for (l_61 = 18; (l_61 <= (-27)); l_61--)
            { 
                int16_t l_64 = (-1L);
                int32_t l_73 = 0xE09FA00AL;
                g_67--;
                g_66 = (safe_mod_func_uint32_t_u_u((p_15 , ((l_36 , 1UL) >= l_72)), p_15));
                l_73 = 0x3F56F60DL;
            }
        }
        g_76[2] &= (safe_div_func_uint64_t_u_u(4UL, (((g_67 & ((1L & 0xA0179E4CL) | l_65)) >= g_47[0]) , g_66)));
    }
    return l_38;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_47[i], "g_47[i]", print_hash_value);

    }
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_76[i], "g_76[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_143[i][j], "g_143[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_189[i][j], "g_189[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_215[i], "g_215[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
